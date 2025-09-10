# 📘 C++ - Module 01

Bem-vinda ao segundo módulo da jornada C++ na 42 Rio!  
Este módulo aprofunda conceitos de **alocação de memória**, **ponteiros para membros**, **referências** e introduz o uso do **switch statement**, ampliando a base de POO em C++98.

<br>

## 🧠 Conceitos Abordados

- Alocação dinâmica (`new` / `delete`)
- Destrutores e gerenciamento de memória
- Ponteiros para funções-membro
- Referências (`&`) e diferenças em relação a ponteiros
- `switch` statement e fallthrough
- Manipulação de `std::string`
- Organização em múltiplos arquivos (`.hpp` e `.cpp`)

<br>

## 🗂 Estrutura

```bash
Module01/
├── ex00/          # BraiiiiiiinnnzzzZ
│   ├── includes/
│   │   └── Zombie.hpp
│   ├── src/
│   │   ├── main.cpp
│   │   ├── newZombie.cpp
│   │   ├── randomChump.cpp
│   │   └── Zombie.cpp
│   └── Makefile
│
├── ex01/          # Moar brainz!
│   ├── includes/
│   │   └── Zombie.hpp
│   ├── src/
│   │   ├── main.cpp
│   │   ├── Zombie.cpp
│   │   └── zombieHorde.cpp
│   └── Makefile
│
├── ex02/          # HI THIS IS BRAIN
│   ├── main.cpp
│   └── Makefile
│
├── ex03/          # Unnecessary violence
│   ├── includes/
│   │   ├── HumanA.hpp
│   │   ├── HumanB.hpp
│   │   └── Weapon.hpp
│   ├── src/
│   │   ├── HumanA.cpp
│   │   ├── HumanB.cpp
│   │   └── Weapon.cpp
│   └── Makefile
│
├── ex04/          # Sed is for losers
│   ├── includes/
│   │   ├── SedApp.hpp
│   │   └── SedReplacer.hpp
│   ├── src/
│   │   ├── main.cpp
│   │   └── SedReplacer.cpp
│   └── Makefile
│
├── ex05/          # Harl 2.0
│   ├── Harl.cpp
│   ├── Harl.hpp
│   ├── main.cpp
│   └── Makefile
│
└── ex06/          # Harl filter
    ├── HarlFilter.cpp
    ├── HarlFilter.hpp
    ├── main.cpp
    └── Makefile
```

<br>

## 🔍 Exercícios
### 🧟 ex00: BraiiiiiiinnnzzzZ

Implementar a classe Zombie com métodos para anunciar sua presença.<br>
Explora construtores, destrutores e uso de heap/stack (newZombie e randomChump).

### 🧟‍♂️ ex01: Moar brainz!

Função zombieHorde(N, name) para criar múltiplos objetos em uma única alocação dinâmica.<br>
Trabalha com arrays, destrutores e memória dinâmica.

### 🧠 ex02: HI THIS IS BRAIN

Praticar ponteiros e referências em cima de uma string.<br>
Objetivo: desmistificar referências imprimindo endereços e valores.

### ⚔️ ex03: Unnecessary violence

Criar classes Weapon, HumanA e HumanB para ilustrar diferença entre uso de referência obrigatória (sempre armado) e uso opcional via ponteiro (pode estar desarmado).

### 📝 ex04: Sed is for losers

Reimplementação simplificada do comando sed:<br>
Ler um arquivo e salvar 'filename'.replace substituindo todas as ocorrências de s1 por s2.<br>
⚠️ Proibido usar `std::string::replace`.

### 💬 ex05: Harl 2.0

Classe Harl com quatro níveis de log (DEBUG, INFO, WARNING, ERROR).<br>
Obrigatório usar ponteiros para funções-membro para despachar as mensagens.

### 🎚️ ex06: Harl filter

Extensão do ex05: agora com switch para filtrar logs.<br>
O programa imprime todas as mensagens a partir do nível selecionado até o mais crítico.

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
* ✅ Obrigatório: `std::cout`, `std::string`, `new/delete`
* *STL ainda não permitida (somente a partir do Module 08)*

<br>

## ✅ Status
| Exercício    | Status          |
| ------------ | --------------- |
| ex00         | ✅ Concluído   |
| ex01         | ✅ Concluído   |
| ex02         | ✅ Concluído   |
| ex03         | ✅ Concluído   |
| ex04         | ✅ Concluído   |
| ex05         | ✅ Concluído   |
| ex06         | ✅ Concluído   |