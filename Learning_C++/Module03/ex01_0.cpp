/* 
    Chamando explicitamente a função da base

    # O cenário
    - Quando uma classe derivada herda um método da base, ela tem duas opções:
        Usar o método exatamente como está, sem redefinir;
        Reescrever o método com o mesmo nome e assinatura, o que oculta o original (como visto no anterior).

    Mas as vezes se quer redefinir o comportamento, sem perder a lógica original da base.
    Nesse caso, chama explicitamente o método da base dentro da nova versão.
*/

#include <iostream>
/*
class   Base {
    public:
        void    sayHello() {
            std::cout << "Hello from Base!" << std::endl;
        }
};

class   Der : public Base {
    public:
        void    sayHello() {
            std::cout << "Der adds: ";
            Base::sayHello(); // explicity call from base 
        }
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Der d;
    d.sayHello();

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}
*/

/* 
    O que acontece:
        `Der::sayHello()` substitui o método da base (oculta ele).
        Dentro da derivada, chama `Base::sayHello()` para reutilizar o comportamento.
    
    Isso é herança com extensão de comportamento — não apaga o que herdou, 
    apenas adiciona algo antes/depois.

    Internamente o `Der` contém um subobjeto `Base`, quando chama `Base::sayHello()`, 
    para o compilador está sendo chamado esse método dentro da parte base do mesmo objeto.

    Então:
    [Objeto Der]
        ├── parte Base  → Base::sayHello()
        └── parte Der  → código adicional
    
    IMPORTANTE: Se não usar `Base::`, o compilador chama o método da derivada (recursivamente!),
    o que causa loop infinito, por isso a qualificação com `Base::` é obrigatória para chamar a
    versão herdada.
*/

// Exercício 7 — “Extendendo comportamento da base”

class   Vehicle {
    public:
        void    startEngine() {
            std::cout << "Vehicle engine started!" << std::endl;
        }
};

class   Car : public Vehicle {
    public:
        void    startEngine() {
            std::cout << "Car checks systems..." << std::endl;
            Vehicle::startEngine();
            std::cout << "Car ready to drive!" << std::endl;
        }
};

int main() {
    std::cout << "Begin\n" << std::endl;

    Car c;
    c.startEngine();

    std::cout << "\nEnd\n" << std::endl;

    return 0;
}

/*
    Resultado do conceito 7 — chamada explícita da base:

    A derivada pode sobrescrever um método, mas ainda reutilizar a lógica da base 
    usando `Base::metodo()`. O padrão ideal quando se quer “melhorar” um comportamento 
    herdado sem duplicar código.
*/