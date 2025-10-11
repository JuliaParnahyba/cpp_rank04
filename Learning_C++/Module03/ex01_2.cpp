/*
    # Chamar construtores da base com parâmetros

    Quando a base precisa de argumentos no construtor, a derivada é responsável 
    por passar esses argumentos na lista de inicialização. Isso é parte essencial da herança.

    Conceito: Se Vehicle não tiver construtor default, Car precisa chamar um construtor 
    válido de Vehicle na lista de init
*/

// Exercício 3 — “Base sem construtor default”

#include <iostream>

class   Vehicle {
    public:
        int speed;

        // ctor and dtor
        Vehicle(int s): speed(s) { std::cout << "Vehicle(" << s << ")\n"; }
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
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Car c1;
    Car c2;
    Car c3(120, 4);

    std::cout << "\nSpeed car 1 is: " << c1.speed << ", and has " << c1.doors << std::endl;
    std::cout << "Speed car 2 is: " << c2.speed << ", and has " << c2.doors << std::endl;
    std::cout << "Speed car 2 is: " << c3.speed << ", and has " << c3.doors << "\n" << std::endl;

    c1.speed = 160;
    c2.speed = 40;

    std::cout << "C1" << std::endl;
    c1.move();
    c1.honk();
    std::cout << "\nC2" << std::endl;
    c2.move();
    c2.honk();
    std::cout << "\nC3" << std::endl;
    c3.move();
    c3.honk();

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}

/* 
    # Por que a derivada escolhe o construtor da base?
        Porque só a derivada sabe quais parâmetros quer passar 
        para montar a parte “mãe” do objeto. O compilador não consegue adivinhar; 
        logo, exige que você especifique na lista de init. 
        Sem isso (ou sem um construtor default na base), não compila.
*/