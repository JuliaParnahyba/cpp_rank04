// Exercício 2 — Ordem de construção/Destruição

#include <iostream>

class   Vehicle {
    public:
        int speed;

        // ctor and dtor
        Vehicle(): speed(0) { std::cout << "Vehicle() ctor\n"; }
        ~Vehicle() { std::cout << "~Vehicle() dtor\n"; }      

        void    move(void) {
            std::cout << "Vehicle is moving at " 
                << speed << "Km/h." << std::endl;
        }
};

class   Car : public Vehicle {
    public:
        int doors;

        // ctor and dtor
        Car(): doors(2) { std::cout << "Car() ctor\n"; }
        ~Car() { std::cout << "~Car() dtor\n"; }
    
        void    honk() {
            std::cout << "It has " << doors 
                << " doors and a loud honk." << std::endl;
        }
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Car c;

    std::cout << "\nSpeed car is: " << c.speed << std::endl;

    c.speed = 160;

    std::cout << "\nCar" << std::endl;
    c.move();
    c.honk();

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}