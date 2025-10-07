/* 
    `private` vs `protected` herdados

    `protected` é acessível na derivada, mas não “do lado de fora” (no main). 
    E com herança pública, a interface pública da base continua pública na derivada.
*/

#include <iostream>

class   Vehicle {
    protected:
        int speed;

    public:
        // ctor and dtor
        Vehicle(int s): speed(s) { std::cout << "Vehicle(" << s << ")\n"; }
        //~Vehicle() { std::cout << "~Vehicle() dtor\n"; }      

        void    move(void) {
            std::cout << "Vehicle is moving at " 
                << speed << "Km/h." << std::endl;
        }

        int     getSpeed() const { return speed; }
};

class   Car : public Vehicle {
    public:
        int doors;

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