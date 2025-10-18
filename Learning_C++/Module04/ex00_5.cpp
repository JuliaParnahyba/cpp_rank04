/*
    Unindo todos os conceitos: 
        - Polimorfismo
        - Função virtual 
        - Destrutor virtual
*/

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
class Porco : public Animal {
    public:
        Porco() {
            std::cout << "Porco constructor default" << std::endl;
        }
        
        ~Porco() {
            std::cout << "Porco destroyed" << std::endl;
        }

        void    animalSound() {
            std::cout << "Classe Porco [derivada]\n"
                << "O porco faz oinc\n" << std::endl;
        }
};

// classe derivada
class Gato : public Animal {
    public:
        Gato() {
            std::cout << "Gato constructor default" << std::endl;
        }
        
        ~Gato() {
            std::cout << "Gato destroyed" << std::endl;
        }

        void    animalSound() {
            std::cout << "Classe Gato [derivada]\n"
                << "O gato faz miau\n" << std::endl;
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

void    hearAnimal(Animal *a) {
    std::cout << "Ouvindo o animal" << std::endl;
    a->animalSound(); // metodo depende do objeto real passado
}

int main() {
    Animal  *myPig = new Porco();
    Animal  *myCat = new Gato();
    Animal  *myDog = new Cao();

    std::cout << "\n";
    
    hearAnimal(myPig);
    hearAnimal(myCat);
    hearAnimal(myDog);

    delete myPig;
    delete myCat;
    delete myDog;

    return 0;
}
