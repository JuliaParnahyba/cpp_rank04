/* 
    Diamante de Herança e Herança Virtual

      A
     / \
    B   C
     \ /
      D

    Essa forma é chamada de “diamante” de herança, em que B e C herdam de A, e
    D herda de B e de C.

    O problema:
    Sem nada especial, o objeto D vai ter duas cópias da base A, uma vinda por B e
    outra vinda por C. Isso causa duplicação de estado e ambiguidade:
    
        se A tem um atributo name, qual name D deveria usar?
        se A tem um método hello(), de qual caminho deve vir?
*/

#include <iostream>

/*
class   A {
    public:
        int value;
        A() : value(10) { std::cout << "Ctor A." << std::endl; } 
};

class   B : public A {};
class   C : public A {};
class   D : public B, public C {};

int main() {
    std::cout << "Begin\n" << std::endl;

    D d;
    
    //d.value = 20; // ambiguous: there is value via B::A and via C::A

    std::cout << "B::value = " << d.B::value << std::endl;
    std::cout << "C::value = " << d.C::value << std::endl;

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}
*/

// D tem duas cópias de A, duas value. Modificar uma não afeta a outra!
// Solução: Heraná Virtual, fazendo com que só exista uma herança dentro de D. 
// Tanto B, quanto C, apontam para a mesma base virtual. 

/*
class   A {
    public:
        int value;
        A() : value(10) { std::cout << "Ctor A." << std::endl; } 
};

class   B : virtual public A {};
class   C : virtual public A {};
class   D : public B, public C {};

int main() {
    std::cout << "Begin\n" << std::endl;

    D d;
    
    d.value = 20; // ambiguous: there is value via B::A and via C::A

    std::cout << "B::value = " << d.B::value << std::endl;
    std::cout << "C::value = " << d.C::value << std::endl;

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}
*/

/*
    DIFERENÇA:

    Sem `virtual`

    [D]
     ├── [B → A]
     └── [C → A] ← duas cópias de A


    Com `virtual`

    [D]
     ├── [B] ─┐
     └── [C] ─┴─> [A] ← uma única cópia de A


    Essa é a mágica da herança virtual: ela faz com que 
    todas as classes derivadas compartilhem uma única base comum.

    # Regra importante sobre construtores virtuais
    Quando se usa herança virtual, a classe mais derivada (no topo da pirâmide) 
    é quem constrói a base virtual. Exemplo abaixo
*/

class   A {
    public:
        A(int n) { std::cout << "A(" << n << ")" << std::endl; }
};

class B : virtual public A {
    public:
        B() : A(1) { std::cout << "B()" << std::endl; } // chamada ignorada
};

class C : virtual public A {
    public:
        C() : A(2) { std::cout << "C()" << std::endl; } // chamada ignorada
};

class D : public B, public C {
    public:
        D() : A(42) { std::cout << "D()" << std::endl; } // constrói a base virtual
};

int main() {
    std::cout << "Begin\n" << std::endl;

    D d;

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}

// As chamadas A(1) e A(2) nas classes intermediárias (B, C) são ignoradas.
// Somente a classe mais derivada (D) constrói a base virtual.