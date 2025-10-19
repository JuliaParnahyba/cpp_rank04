/*
    Classe Abstrata
        Uma classe abstrata é um classe base que não pode ser instanciada diretamente, servindo apenas de modelo (interface) para outras classes, a partir da marcação de pelo menos um método como "puro virtua".

*/

#include <iostream>
#include <string>

class Animal {
    public:
        virtual void    makeSound() const = 0; // puro virtual
};

class Dog : public Animal {
    public:
        void    makeSound() const {
            std::cout << "Woof!" << std::endl;
        }
};

class Cat : public Animal {
    public:
        void    makeSound() const {
            std::cout << "Meow!" << std::endl;
        }
};

int main() {
    // Animal a;                // errado
    // Animal *b = new Animal;  // errado

    Animal *dog = new Dog();    // instaciado, herdando a class base Animal
    Animal *cat = new Cat();    // instaciado, herdando a class base Animal

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
}