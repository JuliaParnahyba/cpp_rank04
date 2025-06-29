# ♻️ Refactor Pull Request – {{Título da Refatoração}}

## ✨ Contexto e Objetivo

Explique qual a motivação para este refatoramento e qual problema visava resolver.

> Exemplo:
> O método `addContact()` estava com responsabilidades duplicadas, dificultando manutenção. Esta refatoração separa a lógica de validação da lógica de armazenamento.

---

## 🔨 O que foi modificado

Liste de forma objetiva os principais pontos alterados.

- Separada função `validateInput()`
- Extraída função `truncateField()`
- Ajustada nomenclatura de variáveis para clareza
- Melhorada indentação e comentários

---

## ✅ Checklist de Refatoração

Marque os itens concluídos:

- [ ] Código reestruturado sem alteração de funcionalidade
- [ ] Compilado com flags `-Wall -Wextra -Werror -std=c++98`
- [ ] Todos testes existentes passaram
- [ ] Valgrind executado sem memory leaks
- [ ] Revisão de nomes e clareza concluída

---

## 🧪 Testes Realizados

Descreva como você confirmou que o refactor não quebrou nada.

> Exemplo:
> Executei todos os comandos (ADD, SEARCH, EXIT) em sequência e comparei outputs antes e depois.

---

## 🎯 Issues Relacionadas

Caso o refactor esteja vinculado a alguma issue:

Related to #<número_da_issue_relacionada>

---

## 📝 Observações

Adicione qualquer detalhe relevante ou pontos de atenção.

> Exemplo:
> Apesar da refatoração não mudar a lógica, recomendo revisão detalhada no método `listContacts()` que teve ajustes de formatação.
