/*
    Exercício:
        Criar uma pequena hierarquia com `Shape` → `Circl`e e `Square`
*/

#include <iostream>
#include <cmath> // para o nº Pi (π) 

// classe abstrata (não pode ser instanciada)
class Shape {
    public:
        // método puro virtual - define o contrato
        virtual double  area() const = 0;
        virtual void    draw() const = 0;
        
        // destrutor virtual. Importante para evitar leaks
        virtual ~Shape() {
            std::cout << "Shape destroyed" << std::endl;
        }
};

// classe concreta
class Circle : public Shape {
    private:
        double  radius;

    public:
        Circle(double r) : radius(r) {
            std::cout << "Circle ctor with " 
                << r << " off radius" << std::endl;
        }

        double  area() const {
            double c_area = M_PI * radius * radius; // circle area (A = π.r²)
            return c_area;
        }

        void    draw() const {
            std::cout << "Drawing a circle with radius " << radius << std::endl;
        }

        ~Circle() {
            std::cout << "Circle destroyed" << std::endl;
        }
};

// classe concreta
class Square : public Shape {
    private:
        double side;
    
    public:
        Square(double s) : side(s) {
            std::cout << "Square ctor with " 
                << s << " off side" << std::endl;
        }

        double  area() const {
            double s_area = side * side; // square area (A = s²)
            return s_area;
        }

        void    draw() const {
            std::cout << "Drawing a square with side " << side << std::endl;
        }

        ~Square() {
            std::cout << "Square destroyed" << std::endl;
        }
};

// função genérica para qualquer shape
void    render(const Shape &s) {
    s.draw();
    std::cout << "Area: " << s.area() << "\n" << std::endl;
}

int main() {
    std::cout << "========== CTOR ==========" << std::endl;
    Shape* c = new Circle(3);
    Shape* q = new Square(4);

    std::cout << "\n========== AUX. FT ==========" << std::endl;
    render(*c);
    render(*q);

    std::cout << "========== DTOR ==========" << std::endl;
    delete c;
    delete q;
}

/*
    O que o compilador faz:
        - Ao declarar `virtual double area() const = 0;` Shape se torna abstrata → não pode ser instanciada.
        - Qualquer classe derivada deve implementar todos os métodos puros virtuais.

    No exercício acima:
        - Cada objeto (Circle, Square) executa seu próprio draw() e area() — polimorfismo.
        - Destrutores são chamados em cascata (primeiro o da derivada, depois o da base).
        - Nenhum Shape foi criado diretamente — apenas referências/pointers para Shape.

    Interpretação:
        - Shape não tem forma concreta, sendo um modelo genérico (abstração)
        - `= 0` em `area()` e `draw()`, são derivadas que devem implementar (contrato obrigatório)
        - `render()` aceita `Shape &`, chamando o método da classe concreta (polimorfismo)
        - Se rodar `Shape s;` dará erro, impedimento de objetos incompletos (segurança) 

    Se adicionar uma nova forma geométrica que herda Shape, nada precisará ser alterado no código e `render()` continuará funcionando perfeitamente, porque trabalha sobre a interface abstrata `Shape`.
*/