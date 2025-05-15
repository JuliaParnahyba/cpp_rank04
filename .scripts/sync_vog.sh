#!/bin/bash

GITHUB_DIR=~/42/Rank04/02_CPP
VOGSPHERE_BASE=~/42/Rank04
MODULES_DIRS=$(git diff --name-only HEAD@{1} HEAD | cut -d/ -f1 | sort -u | grep "^Module")

if [ -z "$MODULES_DIRS" ]; then
  echo "🟢 Nenhum módulo alterado. Nada para sincronizar."
  exit 0
fi

cd "$GITHUB_DIR" || exit 1

for MODULE in $MODULES_DIRS; do
  VOG_DIR="$VOGSPHERE_BASE/Vog_$MODULE"

  echo "📦 Iniciando sincronização de $MODULE"

  if [ ! -d "$VOG_DIR" ]; then
    echo "⚠️  Vogsphere repo '$VOG_DIR' não encontrado. Pulando..."
    continue
  fi

  # Cria branch de exportação com histórico da pasta do módulo
  git subtree split --prefix="$MODULE" -b "export/$MODULE" > /dev/null

  # Puxa no repositório do Vogsphere
  cd "$VOG_DIR" || continue
  git pull "$GITHUB_DIR" "export/$MODULE"

  # Renomeia branch se necessário
  CURRENT_BRANCH=$(git branch --show-current)
  if [ "$CURRENT_BRANCH" != "main" ]; then
    git branch -m main
  fi

  git push origin main
  echo "✅ $MODULE sincronizado com sucesso!"
done
