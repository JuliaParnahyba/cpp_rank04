/* 
    Deep Copy e Regra dos 3

    - Deep Copy
        Copia de um objeto, não apenas do ponteiro, cada objeto tem um ponteiro para o objeto base separado.
    
    - Regra dos 3
        Para que funcione a cópia real é preciso aplicar a regra dis 3, isto é, sempre que uma classe gera ou possui recursos dinâmicos, por exemplo, new, ponteiros, arquivos abertos etc., deve ser implementadas três funções especiais para controlar as cópias.

        Construtor de cópia → quando o objeto é criado a partir de outro
        Operador de atribuição → quando o objeto já existente recebe outro
        Destrutor → quando o objeto é destrído

        Logo, com base nessas funções especiais, a aplicação de classes OCF (Orthodox Canonical Form) é imprescindível para a correta aplicação do conceito deep copy

    Sem a regra dis 3, o compilar gera automaticamente versões do construtor de cópia, operador e destrutor. Contudo, essas versões fazer cópia superficial, copiando os endereços, não o conteúdo apontado. 

    Desmistificando:
    | Fase              | Responsável         | O que faz                                   |
    | ----------------- | ------------------- | ------------------------------------------- |
    | “Nascer copiando” | Construtor de cópia | Cria **nova vida**, mas com o **mesmo DNA** |
    | “Se tornar outro” | Operador `=`        | Desfaz o que era e assume a nova cópia      |
    | “Morrer”          | Destrutor           | Libera o cérebro antes de partir            |

*/

// Exemplo
#include <iostream>
#include <string>

class   Pessoa {
    private:
        std::string *nome;
    
    public:
        // construtor por atribuição
        Pessoa(std::string n) {
            nome = new std::string(n);
            std::cout << "ctor *nome" << " '" << nome 
                << "' | this [" << this << "]" << std::endl;
        }

        // construtor de cópia
        Pessoa(const Pessoa &other) {
            nome = new std::string(*other.nome);
            std::cout << "copy ctor *nome" << " '" << nome 
                << "' | this [" << this << "]" << std::endl;
        }

        // operador de atribuição
        Pessoa &operator=(const Pessoa &other) {
            std::cout << "operador de atribuição *other.nome"  
                << " '" << other.nome << "' | other [" << &other << "]" << std::endl;
            std::cout << "this: " << this << std::endl;
            std::cout << "&other: " << &other << std::endl;
            if (this != &other) {
                std::cout << "this != &other" << std::endl;
                delete nome;
                nome = new std::string(*other.nome);
            }

            std::cout << "operador de atribuição *nome"
                << " '" << nome << "' | this [" << this << "]" << std::endl;
            return *this;
        }

        // destrutor
        ~Pessoa() {
            std::cout << "dtor *nome" << " '" << nome 
                << "' | this [" << this << "]" << std::endl;
            delete nome;
        }

        void setNome(const std::string &n) {
            *nome = n;
        }

        void show() {
            std::cout << "O nome é: " << *nome << " [" << nome << "]" << std::endl;
        }
};

int main() {
    std::cout << "[p1]";
    Pessoa p1("Ju");
    std::cout << "[p1][" << &p1 << "] | ";
    p1.show();
    
    std::cout << "\n[construtor de cópia]\n[p2]";
    Pessoa p2 = p1;
    std::cout << "[p2][" << &p2 << "] | ";
    p2.show();
    std::cout << "\n";

    std::cout << "[Alterando p1]\n";
    p1.setNome("Fabi");
    std::cout << "[p1][" << &p1 << "] | ";
    p1.show();

    std::cout << "[p3]";
    Pessoa p3("X");
    std::cout << "[p3][" << &p3 << "] | ";
    p3.show();
    std::cout << "\n";

    std::cout << "[operador =]\n[p1]";
    p3 = p1;
    std::cout << "[p3][" << &p3 << "] | ";
    p3.show();
    std::cout << "\n";

    std::cout << "[Revendo todos os nomes]\n";
    std::cout << "[p1][" << &p1 << "] ";
    p1.show();
    std::cout << "[p2][" << &p2 << "] ";
    p2.show();
    std::cout << "[p3][" << &p3 << "] ";
    p3.show();
    std::cout << "\n";

    std::cout << "[Destrutores]" << std::endl;

    return 0;
}

/*
    OBSERVAÇÕES:

    - Endereço do objeto vs. valor do ponteiro
        this/&p1/&p2 → endereços dos objetos na stack.
        nome → valor do ponteiro para o std::string no heap.
        &nome → endereço do campo ponteiro dentro do objeto (na stack).

*/