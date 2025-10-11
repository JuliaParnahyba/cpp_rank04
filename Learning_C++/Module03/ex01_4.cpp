/*
    tipos de herança e efeito na interface

    `public` / `protected` / `private` na declaração de herança mudam o que o 
    “mundo de fora” enxerga.

    # public → membros public da base continuam públicos na derivada.
    # protected → membros public/protected da base ficam protegidos 
    na derivada (somem da interface pública).
    # private → membros public/protected da base ficam privados 
    na derivada (mais restrito ainda).
*/

// Exercício 5 — trocando o tipo de herança e reexibindo 

#include <iostream>

class   Vehicle {
    protected:
        int speed;

    public:
        // ctor and dtor
        Vehicle(int s): speed(s) { std::cout << "Vehicle(" << s << ")\n"; }
        ~Vehicle() { std::cout << "~Vehicle() dtor\n"; }      

        void    move(void) {
            std::cout << "Vehicle is moving at " 
                << speed << "Km/h." << std::endl;
        }

        int     getSpeed() const { return speed; }
};

class   Car : protected Vehicle {
    public:
        int doors;

        // reexpose protected methods from Vehicle
        using Vehicle::move;
        using Vehicle::getSpeed;

        /* OR 
        int speedPublic() const { return Vehicle::getSpeed(); }
        void movePublic() { Vehicle::move(); }
        */

        // ctor and dtor
        Car() : Vehicle(0), doors(2) { std::cout << "Car()\n"; }
        // child call base
        Car(int s, int d): Vehicle(s), doors(d) { 
            std::cout << "Car(" << s << ", "<< d <<")\n";
        }
        ~Car() { std::cout << "~Car() dtor\n"; }
    
        void    honk() {
            std::cout << "It has " << doors 
                << " doors and a loud honk." << std::endl;
        }

        void    tune() { speed += 10; }
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Car c(120, 4);

    std::cout << "\nSpeed car is: " << c.getSpeed() 
            << ", and has " << c.doors << std::endl;

    std::cout << "\nCar" << std::endl;
    c.move();
    c.honk();
    
    std::cout << "\ngetSpeed()" << std::endl;
    std::cout << c.getSpeed() << std::endl;

    std::cout << "\ntune()" << std::endl;
    c.tune();
    std::cout << "Now, speed car is: " << c.getSpeed() 
            << ", and has " << c.doors << std::endl;

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}

/*
    `Car : protected Vehicle` → tudo que era public/protected em Vehicle 
    vira protected dentro de Car. Do ponto de vista de quem usa Car (no main), 
    move() e getSpeed() deixam de ser públicos → erros.

    `Car : private Vehicle` → tudo que era public/protected em Vehicle 
    vira private dentro de Car. Fica ainda mais fechado.

    O tipo de herança controla como a interface da base aparece para fora da derivada.

    Quando usar cada uma?
    `public`: relação “é-um” (is-a).
    `protected/private`: relação “é-implementado-em-termos-de” 
    (quase sempre você deveria preferir composição aqui). 
    `private` herança é como “composição com acesso especial”

    
*/