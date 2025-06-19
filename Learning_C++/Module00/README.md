# 📚 Plano de Estudos Derivado do `ex00` – Fundamentos e Fixação

> O `ex00` é aparentemente simples, mas ele é uma porta de entrada para **vários fundamentos essenciais do C++**, e aprofundar esse aprendizado te dará uma base sólida para todos os próximos módulos.

Abaixo estão os principais conceitos que aparecem no exercício `megaphone`, seguidos por:

1. **Explicação/Enunciado**
2. **Séries de Exercícios práticos**
3. **Links de documentação e fontes confiáveis**

<br>

## 🔹 Tema 1 — `main(int argc, char** argv)` e manipulação de argumentos

### 🧪 **ex01: Conte quantos argumentos foram passados**

#### 🎯 Enunciado:

Crie um programa que:
* Conte o número de argumentos passados pela linha de comando (sem contar o nome do programa)
* Imprima a quantidade

#### 💡 Exemplo de uso:

```bash
$ ./count_args arg1 arg2 arg3
You passed 3 arguments.
```

---

### 🧪 **ex02: Imprima os argumentos em ordem inversa**

#### 🎯 Enunciado:

Crie um programa que: 
* Imprima todos os argumentos (exceto o nome do programa) **em ordem reversa**

#### 💡 Exemplo:

```bash
$ ./reverse_args apple banana cherry
cherry
banana
apple
```

---

### 🧪 **ex03: Verifique se algum argumento é um número**

#### 🎯 Enunciado:

Crie um programa chamado `check_digits.cpp` que:

* Verifique se cada argumento contém **apenas dígitos**
* Imprima uma linha por argumento indicando se é numérico ou não

#### 💡 Exemplo:

```bash
$ ./check_digits 42 hello 1234
"42" is numeric
"hello" is not numeric
"1234" is numeric
```

#### 📌 Dica:

Use a função `isdigit(char)` para checar caractere por caractere.

<br>

#### 📚 Onde estudar:

* [cplusplus.com - main](http://www.cplusplus.com/articles/DEN36Up4/)
* [cppreference - main](https://en.cppreference.com/w/cpp/language/main_function)

<br>

## 🔹 2. `std::cout`, `std::endl` e saída padrão

### 🧠 Fundamento:

Substituto mais seguro para `printf` com suporte a tipos diferentes.

### 📌 Exercícios:

* `ex04`: Crie um programa que imprima seu nome e idade.
* `ex05`: Leia dois números e imprima a soma usando `cin` e `cout`.

#### 📚 Onde estudar:

* [cplusplus.com - cout](http://www.cplusplus.com/reference/iostream/cout/)
* [cppreference - iostream](https://en.cppreference.com/w/cpp/io)

<br>>

## 🔹 3. Conversão de caracteres: `std::toupper()`

### 🧠 Fundamento:

Manipular caracteres isolados com funções da C Standard Library.

### 📌 Exercícios:

* `ex06`: Crie `to_lower` e `capitalize` (primeira letra maiúscula).
* `ex07`: Detecte se um argumento é um palíndromo (ex: "arara").

#### 📚 Onde estudar:

* [cplusplus.com - toupper](http://www.cplusplus.com/reference/cctype/toupper/)
* [cppreference - cctype](https://en.cppreference.com/w/cpp/header/cctype)

<br>

## 🔹 4. Modularização e uso correto de `std::string`

### 🧠 Fundamento:

Separar lógica em funções reaproveitáveis. Ajuda na clareza e manutenção.

### 📌 Exercícios:

* `ex08`: Reescreva `megaphone` usando `std::string` e funções com `const std::string&`.
* `ex09`: Faça uma função que retorna uma string transformada ao invés de imprimir diretamente.

#### 📚 Onde estudar:

* [cplusplus.com - functions](http://www.cplusplus.com/doc/tutorial/functions/)
* [cppreference - functions](https://en.cppreference.com/w/cpp/language/functions)

<br>

## 🔹 5. Strings em C++ (`std::string` vs `char*`)

### 🧠 Fundamento:

Usar `std::string` é mais seguro, moderno e funcional que `char*`.

### 📌 Exercícios:

* `ex10`: Crie um programa que concatene todos os argumentos em uma única `std::string` com espaço.
* `ex11`: Conte quantas vogais há em cada argumento.

#### 📚 Onde estudar:

* [cplusplus.com - string](http://www.cplusplus.com/reference/string/string/)
* [cppreference - string](https://en.cppreference.com/w/cpp/string/basic_string)

<br>>

## 🔹 6. Estrutura básica de projeto C++: arquivos `.cpp`, `.hpp`, `Makefile`

### 🧠 Fundamento:

Separar código, criar Makefile e entender o ciclo de build.

### 📌 Exercícios:

* `ex12`: Separe a função `to_upper` em um novo arquivo `.cpp` com header.
* `ex13`: Crie um `Makefile` simples com regras `all`, `clean`, `fclean`, `re`.

#### 📚 Onde estudar:

* [Makefile básico C++](https://opensource.com/article/19/8/what-how-makefile)
* [CMake (futuro)](https://cmake.org/learning/)

<br>

## 💡 Extra: Sites e recursos que valem ouro

| Finalidade        | Recurso                                                          |
| ----------------- | ---------------------------------------------------------------- |
| Manual oficial    | [https://en.cppreference.com/w/](https://en.cppreference.com/w/) |
| C++ prática       | [https://www.learncpp.com/](https://www.learncpp.com/)           |
| Playground online | [https://godbolt.org/](https://godbolt.org/) (Compiler Explorer) |
| Vídeos didáticos  | YouTube – "The Cherno C++ Series"                                |
