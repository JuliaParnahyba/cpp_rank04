/**
 * DISPATCH SIMPLES (STRING -> METODO)
 *
 * Na mesma Calculator, crie uma função dispatch(std::string op) que:
    Recebe "add", "sub", "mul" ou "div".
    Procura em um array de strings e chama o ponteiro correspondente.

 * Se não encontrar, imprime "Unknown operation".
 * 
 */

#include <iostream>
#include <string>

class   Calculator {
    public:
        void    dispatch(std::string op);
    
    private:
        void    add(void) { 
            std::cout << "add\n";
        }

        void    sub(void) {
            std::cout << "sub\n";
        }

        void    mul(void) {
            std::cout << "mul\n";
        }

        void    divi(void) {
            std::cout << "div\n";
        }
};

void    Calculator::dispatch(std::string op) {
    const std::string names[4] = {"add", "sub", "mul", "divi"};
    void    (Calculator::*ops[4])(void) = {
        &Calculator::add,
        &Calculator::sub,
        &Calculator::mul,
        &Calculator::divi
    };

    for (int i = 0; i < 4; i++) {
        if (op == names[i]) {
            (this->*ops[i])();
            return;
        }
    }
    std::cout << "Unknown operation\n";
}

int main() {
    Calculator *calc = new Calculator;

    calc->dispatch("mul");
    calc->dispatch("divi");
    calc->dispatch("pow");
    calc->dispatch("som");
    calc->dispatch("add");

    return 0;    
}