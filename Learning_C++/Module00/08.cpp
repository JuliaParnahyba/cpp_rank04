/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo     : 07.cpp                                                  */
/*    Criado por  : jparnahy <jparnahy@student.42.rio>                      */
/*    Data        : 2025/06/19                                              */
/*                                                                          */
/*    Descrição   : Modularização e uso correto de `std::string`            */
/*                                                                          */
/* ************************************************************************ */

/*
**
** ex08: Reescreva megaphone usando std::string e funções auxiliares
**
** Reescreva a lógica do ex00 (megaphone) com as seguintes melhorias:
** - Use std::string ao invés de char*
** - Crie uma função que transforme uma string para maiúscula
**   `std::string to_uppercase(const std::string& input);`
** - Faça a concatenação de todos os argumentos em uma só std::string 
**   antes de processar
**
** Exemplo:
** $ ./08 Hello everyone
** HELLOEVERYONE
**
*/

#include <iostream> // para std::cout
#include <string> // para std::string
#include <cctype> // para std::toupper

std::string to_uppercase(const std::string& input)
{
    std::string result = input;
    for (size_t i = 0; i < result.length(); i++)
        result[i] = std::toupper(result[i]);
    return result;
}

int main(int argc, char **argv)
{
    // Controle de argumentos
    if (argc == 1) {
        std::cout << "Nenhum argumento identificado." << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        std::string upper = to_uppercase(argv[i]);
        std::cout << upper;
    }
    std::cout << std::endl;
    return 0;
}


/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */

/* ÁREA DESTINADA À CORREÇÕES OU MELHORIAS DO CÓDIGO ENVIADO */
/*
#include <iostream> // para std::cout
#include <string> // para std::string
#include <cctype> // para std::toupper

std::string to_uppercase(const std::string& input)
{
    std::string result = input;
    for (size_t i = 0; i < result.length(); i++)
        result[i] = std::toupper(result[i]);
    return result;
}

// eliminação da linha `std::string upper = to_uppercase(argv[i]);`, que 
// é desnecessária.

int main(int argc, char **argv)
{
    if (argc == 1)
        return std::cout << "Nenhum argumento identificado.\n", 1;

    for (int i = 1; i < argc; ++i)
        std::cout << to_uppercase(argv[i]);
    std::cout << std::endl;
    return 0;
}
*/
