# Polimorfismo

**poly | morphism ↴** (do grego)<br>
`poly` ⇨ _muitos_ | `morphé` ⇨ _formas_

Portanto, é a capacidade de um mesmo tipo apresentar comportamentos diferentes de acordo ao contexto em que está sendo chamado/usado. Isto é, vários objetos diferentes respondem de forma diferente ao mesmo comando. 

Como continuidade das heranças, o Polimorfismo usa métodos herdados para executar diferentes tarefas, permitindo executar uma ação de maneiras diferentes. 

<br>

- Exemplo Prático:
    ```c++
    #include <iostream>

    // classe base
    class Animal {
        public:
            void    animalSound() {
                std::cout << "O animal faz um som" << std::endl;
            }
    };

    // classe derivada
    class Porco : public Animal {
        public:
            void    animalSound() {
                std::cout << "O porco faz oinc" << std::endl;
            }
    };

    // classe derivada
    class Gato : public Animal {
        public:
            void    animalSound() {
                std::cout << "O porco faz miau" << std::endl;
            }
    };

    // classe derivada
    class Cao : public Animal {
        public:
            void    animalSound() {
                std::cout << "O porco faz auau" << std::endl;
            }
    };

    int main() {
        Animal  myAnimal;
        Porco   myPig;
        Gato    myCat;
        Cao     myDog;
        
        myAnimal.animalSound();
        myPig.animalSound();
        myCat.animalSound();
        myDog.animalSound();

        return 0;
    }
    ```

<br>

## Tipos

Existem três tipos de polimorfismo em C++ 

1. **Polimorfismo de Sobrecarga (Overloading)**
2. **Polimorfismo Paramétrico (Templates)**
3. **Polimorfismo de Subtipo (Herança + Virtual)**

| Tipo | Quando ocorre | Exemplo prático |
| :--- | :------------ | :-------------- |
| **1️⃣**    | Em **tempo de compilação** | Ter várias funções com o **mesmo nome**, mas **parâmetros diferentes**. O compilador escolhe qual chamar.                                  |
| **2️⃣**        | Em **tempo de compilação** | Criar **funções genéricas** (templates) que funcionam para qualquer tipo (int, float, string...).                                          |
| **3️⃣** | Em **tempo de execução**   | Permite que **um ponteiro ou referência de uma classe base** aponte para **um objeto derivado** e execute o comportamento específico dele. |

<br>

## Funções Virtuais

Uma **função virtual** é uma função mebro da classe base que pode ser _substituída_ em classes derivadas, sendo elas parte fundamental do Polimorfismo em C++, permitindo que objetos diferentes respondam de forma diferente à mesma chamada de função.


### Por que usar funções virtuais?

Sem `virtual` o compilador decide qual função chamar com base no tipo do ponteiro, não no tipo de objeto real. 

Com `virtual` o compilador passa a entender que, embora haja um objeto base, em tempo de execução ele verifica o objeto real a ser chamado, para qual o ponteiro está apontando.

<br>

**SEM** _`virtual`_ | **COM** _`virtual`_
 :----------------- | :---------------- 
A função base é executada, mesmo que o objeto seja de uma classe filha | A versão filha funciona, como você espera.

<br>

- Exemplo Prático: <br>

    **SEM** _`virtual`_ 
    ```c++
    #include <iostream>

    // classe base
    class Animal {
        public:
            void    animalSound() {
                std::cout << "O animal faz um som" << std::endl;
            }
    };

    // classe derivada
    class Cao : public Animal {
        public:
            void    animalSound() {
                std::cout << "O cachorro faz auau" << std::endl;
            }
    };

    int main() {
        Animal* a;          // Declara o ponteiro para a clase base
        Cao c;              // Cria o objeto da classe derivada (Cao)
        
        a = &c;             // Aponta o ponteiro do objeto base para o objeto derivado (Cao)
        
        a->animalSound();   // Chama a função som() usando o ponteiro. 
        // Como som() não é virtual, isso chama a versão de Animal
        
        return 0;
    }
    ```

    <br>

    **COM** _`virtual`_ 
    ```c++
    #include <iostream>

    // classe base
    class Animal {
        public:
            virtual void    animalSound() {
                std::cout << "O animal faz um som" << std::endl;
            }
    };

    // classe derivada
    class Cao : public Animal {
        public:
            void    animalSound() {
                std::cout << "O cachorro faz auau" << std::endl;
            }
    };

    int main() {
        Animal* a;
        Cao c;
        
        a = &c;
        
        a->animalSound();   // Chama a função som() usando o ponteiro. 
        // Como som() agora é virtual, isso chama a versão da classe Cao
        
        return 0;
    }
    ```

Quando um método é `virtual`, o compilador cria uma tabela invisível chamada vtable (Virtual Table),em que:
- Cada classe que tem métodos virtual guarda endereços das funções reais nela.
- Quando o programa executa, ele vê que a (um Animal*) aponta para uma vtable de Cao.
- Então ele chama a versão Cao::animalSound().

_🧩 Isso se chama despacho dinâmico, isto é, escolher a função em tempo de execução e não em tempo de compilação._

<br>

- Observação:
    > <br>
    > 
    > O operador `->` é utilizado para acessar membros, como funções ou variáveis através de um ponteiro.
    >
    > ```cpp
    > Animal *a = new Animal();
    > a->animalSound(); // o mesmo que (*a).animalSound();
    > ```
    > 
    > <br>

<br>

_Dica: Se estiver usando um ponteiro para um objeto, use -> para acessar seus membros._

<br>

## Destrutores Virtuais

Se o destrutor de `Animal` não for virtual, apenas o destrutor da classe base é chamado, resultando em vazamento de memório, pois o destrutor de Dog não irá rodar.