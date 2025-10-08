/* 
    Herança múltipla e ambiguidade

    Em C++, uma classe pode herdar de mais de uma base.
    Isso significa que ela absorve membros (atributos e métodos) de múltiplas classes-mãe.
*/

#include <iostream>
/*
class   A {
    public:
        void    Hello() { std::cout << "Hello from A" << std::endl; }
};

class   B {
    public:
        void    Hi() { std::cout << "Hello from B" << std::endl; }
};

class   C : public A, public B {};

int main() {
    std::cout << "Begin\n" << std::endl;

    C der;
    der.Hello();
    der.Hi();

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}
*/

/* 
    C herda de A e de B → então, objetos de C podem acessar hello() e hi():
*/

// O PROBLEMA: Ambiguidade - Se ambas as bases tiverem métodos com o mesmo nome?
/*
class   A {
    public:
        void    speak() { std::cout << "A speaking" << std::endl; }
};

class   B {
    public:
        void    speak() { std::cout << "B speaking" << std::endl; }
};

class   C : public A, public B {};

int main() {
    std::cout << "Begin\n" << std::endl;

    C der;
    //der.speak(); // ERROR - C class two inherited versions of speak()

    der.A::speak(); // call A version
    der.B::speak(); // call B version

    std::cout << "\nEnd" << std::endl;

    return 0;
}
*/

// exemplo completo e didático

class   Teacher {
    public:
        void    speak() {
            std::cout << "Teacher speaking about C++" << std::endl;
        }
};

class Singer {
    public:
        void    speak() {
            std::cout << "Singer speaking on stage" << std::endl;
        }
};

class Performer : public Teacher, public Singer {
    public:
        void    introduce() {
            std::cout << "Introducing Performer..." << std::endl;
            Teacher::speak();  // explicitly choose
            Singer::speak();   // call the other version
        }
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Performer p;

    p.introduce();

    std::cout << "\nEnd" << std::endl;

    return 0;
}

/*
    O Performer herda duas versões de speak(), e a escolha explícita 
    (Teacher::speak() / Singer::speak()) evita ambiguidade.

    Conceito-chave: Quando duas classes-base têm métodos ou atributos com o mesmo nome,
    e uma derivada herda de ambas, você precisa qualificar com o nome da base
    para dizer qual deve ser usado, caso contrário, ocorre ambiguidade.
*/