/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo:    01.cpp                                                    */
/*    Criado por: jparnahy <jparnahy@student.42.rio>                        */
/*    Data:       2025/05/16                                                */
/*                                                                          */
/*    Descrição: Exemplo de uso de argc e argv.                             */
/*                                                                          */
/* ************************************************************************ */

/*
** ex01: Conte quantos argumentos foram passados
**
** Crie um programa chamado `count_args.cpp` que conte o número de argumentos 
** passados pela linha de comando (sem contar o nome do programa) e 
** imprima a quantidade.
**
** Exemplo de uso:
** $ ./count_args arg1 arg2 arg3
** You passed 3 arguments.
**
*/

#include <iostream> 

int main(int c, char **v)
{
    (void)v;

    int count = c - 1;

    std::cout << "You passed " << count << " arguments." << std::endl;
    return (0);
}


/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */

/*
#include <iostream>

int main(int argc, char **argv)
{
    (void)argv;

    int count = argc - 1
    if (count == 0)
        std::cout << "You passed no arguments." << std::endl;
    else
        std::cout << "You passed " << count << " arguments." << std::endl;
    return (0);   
}
*/