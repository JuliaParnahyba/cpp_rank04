/**
 * VARIAÇÃO COM PARÂMETROS
 *
 * Crie uma classe Math com dois métodos:
    void square(int n), que imprime n*n
    void cube(int n), que imprime n*n*n

 * Agora use ponteiros para funções-membro com parametros (void(Math::*)(int)),
   guarde-os em um array e chame-os para diferentes valores.
 *
 * 
 */

#include <iostream>
#include <string>

class  Math {
public:
    void square(int n);
    void cube(int n);
};

void    Math::square(int n) {
    int result = n * n;
    std::cout << "Result of square is: " << result << std::endl;
}

void    Math::cube(int n) {
    int result = n;

    for (int i = 1; i < 3; i++)
        result = result * n;

    std::cout << "Result of cube is: " << result << std::endl;
}


/*
int main(){
    Math matic;

    void (Math::*fs)(int n) = &Math::square;
    void (Math::*fc)(int n) = &Math::cube;

    (matic.*fs)(2);
    (matic.*fc)(2);

    return 0;

}
*/

int main() {
    Math matic;

    // declara o tipo: void (Math::*)(int)
    void (Math::*op[2])(int) = {
        &Math::square, 
        &Math::cube
    };

    // call square
    (matic.*op[0])(3);
    (matic.*op[1])(2);

    return 0;
}