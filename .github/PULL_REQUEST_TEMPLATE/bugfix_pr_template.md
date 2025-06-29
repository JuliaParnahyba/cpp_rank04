# 🐛 Bugfix Pull Request – {{Título do Bug ou Referência}}

## ✨ Descrição do Problema

Descreva de forma objetiva qual era o problema identificado.

> Exemplo:
> Ao executar o comando SEARCH sem contatos cadastrados, o programa exibía uma saída vazia ao invés de mensagem de erro.

---

## 🔧 Descrição da Solução

Explique resumidamente o que foi feito para resolver.

> Exemplo:
> Adicionada validação para verificar se o array de contatos está vazio antes de exibir a tabela.

---

## ✅ Checklist de Correção

Marque os itens concluídos:

- [ ] Bug reproduzido localmente antes da correção
- [ ] Código corrigido conforme análise
- [ ] Compilado com flags `-Wall -Wextra -Werror -std=c++98`
- [ ] Testes executados confirmando correção
- [ ] Valgrind executado sem memory leaks
- [ ] Revisão do código (clareza e impacto)

---

## 🧪 Evidências da Correção

Inclua prints ou descrições de antes/depois se aplicável.

> Antes:
> SEARCH sem contatos exibia tabela vazia.

> Depois:
> SEARCH sem contatos exibe mensagem "No contacts found."

---

## 🎯 Issues Relacionadas

Referencie Issues associadas (se houver):

Closes #<número_da_issue_do_bug>

---

## 📝 Observações

Adicione qualquer detalhe relevante ou pontos de atenção.

> Exemplo:
> A validação foi adicionada no método `listContacts()` da classe PhoneBook.
