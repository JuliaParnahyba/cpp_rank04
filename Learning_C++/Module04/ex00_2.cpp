/*
    ## Funções Virtuais
    Sem `virtual` o compilador decide qual função chamar com base no tipo do ponteiro, não no tipo de objeto real. 

    Com `virtual` o compilador passa a entender que, embora haja um objeto base, em tempo de execução ele verifica o objeto real a ser chamado, para qual o ponteiro está apontando.
*/

/*
// Sem `virtual`
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
class Cao : public Animal {
    public:
        void    animalSound() {
            std::cout << "Classe Cao [derivada]\n"
                << "O cachorro faz auau\n" << std::endl;
        }
};
*/

// Com `virtual`
#include <iostream>

// classe base
class Animal {
    public:
        virtual void    animalSound() {
            std::cout << "Classe Animal [base]\n"
                << "O animal faz um som\n" << std::endl;
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
    Animal  *myAnimal;
    Cao     myDog;

    myAnimal = &myDog;
    
    myAnimal->animalSound();

    return 0;
}
