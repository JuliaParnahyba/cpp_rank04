/**
 * ARRAY DE PONTEIROS PARA MÉTODOS
 * 
 * Crie uma classe Calculator com métodos 
    add(), sub(), mul(), div() (cada um só imprime o nome da operação, não precisa calcular).

 * Faça um array de ponteiros para funções-membro e invoque todos em sequência usando um loop.
 */

#include <iostream>

class Calculator {
    public:
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

int main() {
    Calculator *calc = new Calculator;

    void    (Calculator::*ops[4])() = {
        &Calculator::add, 
        &Calculator::sub, 
        &Calculator::mul, 
        &Calculator::divi
    };

    for (int i = 0; i < 4; i++) {
        (calc->*ops[i])();
    }

    std::cout << "\n";

    Calculator c;

    for (int i = 0; i < 4; i++) {
        (c.*ops[i])();
    }

    delete calc;

    return 0;

}