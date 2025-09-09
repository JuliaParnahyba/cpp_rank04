/**
 * PONTEIRO + OBJETO DINÂMICO
 * 
 * Expanda a classe Printer com outro método sayBye() que imprime "Bye".
   Guarde um ponteiro para sayBye() e invoque-o através de um ponteiro para objeto
   (Printer* p = new Printer;).

 * Não esqueça do delete.
 */

 #include <iostream>

class   Printer {
    public:
        void    sayHello(void) {
            std::cout << "Hello\n";
        }

        void    sayBye(void) {
            std::cout << "Bye\n";
        }
};

int main() {
    Printer *print = new Printer;

    void (Printer::*hello)(void) = &Printer::sayHello;
    void (Printer::*bye)(void) = &Printer::sayBye;

    (print->*hello)();
    (print->*bye)();

    delete print;
    return 0;
}