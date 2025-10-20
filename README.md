
# 🚀 42 C++ Modules

Este é o repositório onde documento meu progresso na trilha de **C++ da 42**. Cada módulo representa uma etapa prática no aprofundamento dos conceitos de **Programação Orientada a Objetos**, utilizando a norma **C++98** e **sem uso da STL até os módulos finais**.

<br>

## 🧠 Sobre o projeto

Esta sequência de módulos tem como objetivo introduzir e consolidar os fundamentos da linguagem **C++**, com foco em boas práticas e arquitetura orientada a objetos.  
Entre os principais conceitos abordados estão:

- Fundamentos da OOP com C++98  
- Alocação e gerenciamento de memória  
- Orthodox Canonical Form (OCF)  
- Herança e Polimorfismo  
- Criação de classes abstratas e interfaces  
- Sobrecarga de operadores e funções  
- Design orientado a encapsulamento e reuso  

<br>

## 📦 Estrutura do Repositório

```bash
CPP/
├── .scripts/
│   └── sync_vog.sh
├── Developing/
│   ├── Module00/
│   │   ├── ex00/       # Megaphone
│   │   ├── ex01/       # PhoneBook
│   │   ├── ex02/       # The Job of Your Dreams
│   │   ├── en.subject_Module00.pdf
│   │   └── README.md
│   ├── Module01/
│   │   ├── ex00/       # Zombie
│   │   ├── ex01/       # ZombieHorde
│   │   └── ...
│   ├── Module02/
│   │   ├── ex00/       # Canonical Form Class
│   │   └── ...
│   ├── Module03/       # Class Inheritance
│   │   └── ...
│   └── Module04/       # Polymorphisms & Abstract Classes
│       └── ...
├── Learning_C++/
│   ├── Module00/
│   │   ├── README.md
│   │   └── ...
│   ├── Module01/
│   │   └── ...
│   ├── Module02/
│   │   └── ...
│   ├── Module03/
│   │   └── ...
│   └── Module04/
│       └── ...
├── .gitignore
└── README.md
```

<br>

## 📚 Módulos e Conceitos

| Módulo    | Conceitos Abordados                                                            | Status       |
| --------- | ------------------------------------------------------------------------------ | ------------ |
| Module 00 | Namespaces, classes, métodos, `const`, `static`, I/O, listas de inicialização  | ✅ Concluído |
| Module 01 | Alocação dinâmica, referências, ponteiros para membros, `switch`               | ✅ Concluído |
| Module 02 | Sobrecarga de operadores, Canonical Form, fixed-point, comparação e aritmética | ✅ Concluído |
| Module 03 | Herança, construtores/destrutores, múltipla herança, especializações de classe | ✅ Concluído |
| Module 04 | Polimorfismo, classes abstratas, interfaces e deep copies                      | ✅ Concluído |

> ⚠️ *O uso da STL (ex.: vector, map, algorithm) é permitido apenas a partir do Módulo 08.*

<br>

## 🧪 Compilação

Todos os exercícios devem ser compilados com:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Cada pasta contém seu próprio `Makefile` com as regras:

* `all`
* `clean`
* `fclean`
* `re`

<br>

## 🧯 Restrições

* ❌ Não usar: `printf`, `malloc`, `free`, `using namespace`, `friend`
* ✅ Permitido: tudo da Standard Library, **exceto containers e algoritmos antes do Módulo 08**

<br>

## 🧩 Padrões e Normas

Todos os módulos seguem as diretrizes oficiais da 42:
- [Norminette](https://github.com/42school/norminette/tree/master/pdf)
- Subjects oficiais de cada módulo (00–04)

<br>

O estilo adotado é limpo e autodocumentado, priorizando:
- Clareza e modularidade
- Mensagens descritivas em construtores e destrutores
- Uso consistente da Orthodox Canonical Form (OCF)
- Boas práticas de encapsulamento e RAII

<br>

## 🧑‍💻 Autora

### Julia Parnahyba
Estudante de Engenharia de Software | [42 Rio](https://42.rio)
<br>LinkedIn: [Julia Parnahyba](https://www.linkedin.com/in/juliaparnahyba/)
<br>GitHub: [JuliaParnahyba](https://github.com/JuliaParnahyba)

<br>

*“By Odin, by Thor! Use your brain!” – Subject dos módulos*



