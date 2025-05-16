/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo:    02.cpp                                                    */
/*    Criado por: jparnahy <jparnahy@student.42.rio>                        */
/*    Data:       2025/05/16                                                */
/*                                                                          */
/*    Descrição: Exemplo de uso de argc e argv e manipulação de argumentos  */
/*                                                                          */
/* ************************************************************************ */

/*
** ex02: Imprima os argumentos em ordem inversa
**
** Crie um programa que imprima todos os argumentos, exceto o nome do programa
** e em ordem reversa.
**
** Exemplo de uso:
** $ ./reverse_args apple banana cherry
** cherry
** banana
** apple
**
*/

#include <iostream> 

int main(int c, char **v)
{
    for (int arg = c - 1; arg > 0; arg--)
        std::cout << v[arg] << std::endl;
    return (0);
}