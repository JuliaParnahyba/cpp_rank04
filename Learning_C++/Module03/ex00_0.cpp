/*
    Parte 1 — O que é herança, em essência

    Definição simples: Herança é o mecanismo que permite criar uma nova classe
    baseada em outra já existente, reutilizando código e especializando comportamentos.

    Em outras palavras: Uma classe filha herda os atributos e métodos da classe mãe,
    podendo usar, expandir ou sobrescrever o que veio dela.

    Analogia do mundo real:

        Pensa numa família:

        # Pessoa → tem nome e idade.
        # Aluno → é uma pessoa que também tem matrícula.
        # Professor → é uma pessoa que também tem salário.

        Repare que:
        Aluno é uma Pessoa, bem como Professor é uma Pessoa, cada um com 
        "comportamento especializado"

        Quando faz: `Aluno a;`
        O compilador cria um objeto com duas partes internas:
            [Pessoa] → nome, idade, apresentar()
            [Aluno]  → matricula, estudar()
        
        Então, Aluno possui tudo que Pessoa tem + o que ele mesmo define.

*/

// Exercício 1 — “Entendendo a herança básica”

#include <iostream>

class   Vehicle {
    public:
        int speed;    

        void    move(void) {
            std::cout << "Vehicle is moving at " 
                << speed << "Km/h." << std::endl;
        }
};

class   Car : public Vehicle {
    public:
        int doors;
    
        void    honk() {
            std::cout << "It has " << doors 
                << " doors and a loud honk." << std::endl;
        }
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Car c;

    c.speed = 160;
    c.doors = 4;

    c.move();
    c.honk();

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}