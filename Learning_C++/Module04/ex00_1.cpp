/*
    # Polimorfismo

    **poly | morphism ↴** (do grego)<br>
    `poly` ⇨ _muitos_ | `morphé` ⇨ _formas_

    Como continuidade das heranças, o Polimorfismo usa métodos herdados para executar diferentes tarefas, permitindo executar uma "mesma ação" de maneiras diferentes. 
*/

#include <iostream>

// classe base
class Animal {
    public:
        void    animalSound() {
            std::cout << "Classe Animal [base]\n"
                << "O animal faz um som\n" << std::endl;
        }
};

// classe derivada
class Porco : public Animal {
    public:
        void    animalSound() {
            std::cout << "Classe Porco [derivada]\n"
                << "O porco faz oinc\n" << std::endl;
        }
};

// classe derivada
class Gato : public Animal {
    public:
        void    animalSound() {
            std::cout << "Classe Gato [derivada]\n"
                << "O gato faz miau\n" << std::endl;
        }
};

// classe derivada
class Cao : public Animal {
    public:
        void    animalSound() {
            std::cout << "Classe Cao [derivada]\n"
                << "O cachorro faz auau\n" << std::endl;
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