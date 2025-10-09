/* 
    Ocultação de sobrecargas (name hiding) e using Base::f.

    Quando uma classe derivada declara qualquer função com o mesmo nome da base,
    todas as sobrecargas da base com esse nome ficam ocultas no escopo da derivada,
    mesmo que a assinatura seja diferente.
*/

#include <iostream>

class   Base {
    public:
        void    f(int) { std::cout << "Base::f(int)" << std::endl; }
        void    f(double) { std::cout << "Base::f(double)" << std::endl; }
};

class   Der : public Base {
    public:
        //brings all versions of 'f' from the Base back into the scope of the Derivative    
        using Base::f;

        // new function with the same name, but diferent assign
        void    f(const char*) { std::cout << "Der::f(const char*)" << std::endl; }
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Der d;

    d.f("Hello");
    d.f(10);
    d.f(3.14);

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}

/* 
    Apenas declarar `Der::f(const char*)` faz o compilador ocultar 
    todas as funções f(...) herdadas de Base. Isso acontece porque C++ 
    resolve nomes por escopo, não por assinatura. Então, quando ele 
    encontra `f` no escopo da derivada, ele para de olhar para a base 
    e só considera as versões locais.

    Com a reexposição com using Base::f, o compilador vê as três versões
    e escolhe a correta por sobrecarga (overload).
*/