/*
    ## Destrutor Virtuais
    Se o destrutor de `Animal` não for virtual, apenas o destrutor da classe base é chamado, resultando em vazamento de memório, pois o destrutor de Dog não irá rodar.
*/

/*
// Sem destrutor `virtual`
#include <iostream>

// classe base
class Animal {
    public:
        Animal() {
            std::cout << "Animal constructor default\n" << std::endl;
        
        }
        ~Animal() {
            std::cout << "Animal destroyed" << std::endl;
        }

        virtual void    animalSound() {
            std::cout << "Classe Animal [base]\n"
                << "O animal faz um som\n" << std::endl;
        }
};

// classe derivada
class Cao : public Animal {
    public:
        Cao() {
            std::cout << "Cao constructor default\n" << std::endl;
        }
        
        ~Cao() {
            std::cout << "Cao destroyed" << std::endl;
        }

        void    animalSound() {
            std::cout << "Classe Cao [derivada]\n"
                << "O cachorro faz auau\n" << std::endl;
        }

};
*/

// Com destrutor `virtual`
#include <iostream>

// classe base
class Animal {
    public:
        Animal() {
            std::cout << "Animal constructor default" << std::endl;
        
        }
        virtual ~Animal() {
            std::cout << "Animal destroyed" << std::endl;
        }

        virtual void    animalSound() {
            std::cout << "Classe Animal [base]\n"
                << "O animal faz um som\n" << std::endl;
        }
};

// classe derivada
class Cao : public Animal {
    public:
        Cao() {
            std::cout << "Cao constructor default" << std::endl;
        }
        
        ~Cao() {
            std::cout << "Cao destroyed" << std::endl;
        }

        void    animalSound() {
            std::cout << "Classe Cao [derivada]\n"
                << "O cachorro faz auau\n" << std::endl;
        }

};

int main() {
    Animal  *myAnimal = new Cao();
    
    std::cout << "\n";
    myAnimal->animalSound();
    
    delete myAnimal;
    
    return 0;
}
