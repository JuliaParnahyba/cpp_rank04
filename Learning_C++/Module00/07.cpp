/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo     : 07.cpp                                                  */
/*    Criado por  : jparnahy <jparnahy@student.42.rio>                      */
/*    Data        : 2025/06/19                                              */
/*                                                                          */
/*    Descrição   : Conversão de caracteres: `std::toupper()`, etc..        */
/*                                                                          */
/* ************************************************************************ */

/*
**
** ex07: Verifique se um argumento é um palíndromo
**
** Crie um programa que, para cada argumento, verifique se ele é um palíndromo
** (Ignore maiúsculas/minúsculas [use std::tolower()])
**
** Exemplo:
** $ ./07 arara abcba banana
** "arara" is a palindrome
** "abcba" is a palindrome
** "banana" is not a palindrome
**
*/
/*
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

std::string to_lower(const std::string &input)
{
    std::string result = input;
    for (int i = 0; i < result.length(); i++)
        result[i] = std::tolower(result[i]);
    return result;
}

int is_poli(const std::string &arg)
{
    std::string input = arg;
    std::reverse(input.begin(), input.end());
    if (arg == input)
        return 1;
    else
        return 0;
}

int main(int argc, char **argv)
{
    // Verificando argumento
    if (argc == 1)
    {
        std::cout << "Nenhum argumento fornecido." << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        std::string lower = to_lower(argv[i]);
        if (is_poli(lower))
            std::cout << lower << " is a palindrome." << std::endl;
        else
            std::cout << lower << " is not a palindrome." << std::endl;
    }
    return 0;
}
*/


/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */

/* ÁREA DESTINADA À CORREÇÕES OU MELHORIAS DO CÓDIGO ENVIADO */


#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

// Utilizar size_t como índice para evitar warning, uma vez que os índices 
// de std::string são do tipo size_t.

std::string to_lower(const std::string &input)
{
    std::string result = input;
    for (size_t i = 0; i < result.length(); i++)
        result[i] = std::tolower(result[i]);
    return result;
}


// O tipo de retorno esperado pelo função pode ser booleano, tornando a comparação
// direta no retorno, sem necessidade de if.
// Nomenclatura mais sugestiva apenas, usando input para o argumento de entrada 
// e reversed como a string invertida. 

bool is_poli(const std::string &input)
{
    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());
    return input == reversed;
}

int main(int argc, char **argv)
{
    // Verificando argumento
    if (argc == 1)
    {
        std::cout << "Nenhum argumento fornecido." << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        std::string lower = to_lower(argv[i]);
        if (is_poli(lower))
            std::cout << lower << " is a palindrome." << std::endl;
        else
            std::cout << lower << " is not a palindrome." << std::endl;
    }
    return 0;
}
