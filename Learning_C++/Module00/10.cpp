/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo     : 10.cpp                                                  */
/*    Criado por  : jparnahy <jparnahy@student.42.rio>                      */
/*    Data        : 2025/06/19                                              */
/*                                                                          */
/*    Descrição   : Strings em C++ (`std::string` vs `char*`)               */
/*                                                                          */
/* ************************************************************************ */

/*
**
** ex10: Concatene todos os argumentos em uma única std::string com espaços
**
** Crie um programa que:
** - Leia todos os argumentos da linha de comando (exceto o nome do programa)
** - Concatene em uma única string, separados por espaço
** - Imprima o resultado final
**
** Exemplo:
** $ ./10 Julia é incrível
** Julia é incrível
**
*/

#include <iostream>
#include <string>

std::string to_concat(char **input, int nbr)
{
    std::string result;

    for (int i = 1; i < nbr; i++) {
        result += input[i];
        if (i != nbr - 1)
            result += " ";
    }
    return result;
}

int main(int argc, char **argv)
{
    // Controle de argumentos
    if (argc == 1) {
        std::cout << "Nenhum argumento identificado." << std::endl;
        return 1;
    }

    std::string result = to_concat(argv, argc);
    std::cout << result << std::endl;
    return 0;
}



/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */

/* ÁREA DESTINADA À CORREÇÕES OU MELHORIAS DO CÓDIGO ENVIADO */