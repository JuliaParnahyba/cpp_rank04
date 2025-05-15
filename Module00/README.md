# 📘 C++ - Module 00

Bem-vinda ao primeiro módulo da jornada C++ na 42 Rio!  
Este módulo tem como objetivo introduzir os fundamentos da Programação Orientada a Objetos (OOP), além de conceitos básicos da linguagem C++98, com foco em boas práticas e organização.

<br>

## 🧠 Conceitos Abordados

- Namespaces
- Classes e atributos
- Funções membro
- Streams (`std::cout`, `std::cin`)
- Constantes (`const`)
- Atributos e métodos `static`
- Listas de inicialização de membros (`initialization lists`)
- Makefile no contexto C++

<br>

## 🗂 Estrutura

```bash
Module00/
├── ex00/          # Megaphone
│   └── megaphone.cpp
├── ex01/          # PhoneBook
│   ├── Contact.cpp / Contact.hpp
│   ├── PhoneBook.cpp / PhoneBook.hpp
│   └── main.cpp
├── ex02/          # The Job Of Your Dreams
│   ├── Account.cpp
│   ├── Account.hpp
│   └── tests.cpp
└── Makefile
````

<br>

## 🔍 Exercícios

### 📢 `ex00`: Megaphone

Criar um programa que converte a entrada de texto para caixa alta, ou imprime um ruído padrão se nenhum argumento for passado.

```bash
./megaphone "hello world"
HELLO WORLD
```

<br>

### ☎️ `ex01`: My Awesome PhoneBook

Simulação de um aplicativo de telefone dos anos 80. Deve permitir:

* Adicionar até 8 contatos (com overwrite em FIFO)
* Listar contatos com campos truncados (10 caracteres)
* Pesquisar contato pelo índice
* Campos: nome, sobrenome, apelido, telefone e segredo sombrio

<br>

### 💼 `ex02`: The Job Of Your Dreams

Reconstruir a implementação de uma classe `Account` a partir de um `tests.cpp` e um log de execução. A tarefa testa:

* Entendimento de código legado
* Implementação com base em comportamento observado
* Atenção a destrutores e ordem de chamada

<br>

> 📝 Este exercício é opcional, mas altamente recomendado.

<br>

## 🛠 Compilação

Utilize o seguinte padrão de compilação:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Cada exercício possui seu próprio `Makefile` com as regras usuais:

* `all`
* `clean`
* `fclean`
* `re`

<br>

## ⚠️ Restrições

* ❌ Proibido: `printf`, `malloc`, `free`, `using namespace`, `friend`
* ✅ Obrigatório: Código C++ idiomático com `std::cout`, `std::string`, etc.
* STL ainda não permitida.

<br>

## ✅ Status

| Exercício | Status                  |
| --------- | ----------------------- |
| ex00      | ✅ Concluído            |
| ex01      | ⏳ Em andamento         |
| ex02      | 🔲 Opcional (planejado) |

outro testes