/**
 * SINTAXE BÁSICA
 * 
 * Crie uma classe Printer com um método sayHello() que imprime "Hello".
   Declare um ponteiro para esse método e use-o para chamá-lo a partir de um objeto.  
 */

#include <iostream>

class   Printer {
    public:
        void    sayHello(void) {
            std::cout << "Hello\n";
        }
};

int main () {
    Printer printer;

    // decla o tipo correto: void (Classe::*)(void)
    // retorno (Classe::*função)(argumento) = referênciaClasse::funçãoDaClasse
    void (Printer::*fn)(void) = &Printer::sayHello;

    //chama no objeto: (obj.*ponteiro)();
    (printer.*fn)();

    //chama via ponteiro para o objeto: (ptr->*ponteiro)();
    Printer *pp = &printer;
    (pp->*fn)();

    return 0;
}