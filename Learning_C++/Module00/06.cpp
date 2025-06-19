/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo     : 06.cpp                                                  */
/*    Criado por  : jparnahy <jparnahy@student.42.rio>                      */
/*    Data        : 2025/06/19                                              */
/*                                                                          */
/*    Descrição   : Conversão de caracteres: `std::toupper()`, etc..        */
/*                                                                          */
/* ************************************************************************ */

/*
**
** ex06: Crie um programa que, para cada argumento passado via argv, imprima:
** - o argumento em letras maiúsculas
** - o argumento com o primeiro caractere em maiúsculo e o restante 
**   em minúsculas
**
** [DESCRIÇÃO DO EXERCÍCIO AQUI]
**
** Exemplo:
** $ ./06 HELLO world
** hello
** Hello
** world
** World
**
*/
/*
#include <iostream>
#include <cctype>  // Necessário para std::toupper e std::tolower

void    to_lower(char *argv)
{
    for (int i = 0; argv[i]; i++)
    {
        // Converte cada caractere para minúsculo
        argv[i] = std::tolower(argv[i]); 
    }
}

void    to_capital(char *argv)
{
    // Converte o primeiro caracter em maiúscula
    argv[0] = std::toupper(argv[0]);
    to_lower(&argv[1]);
}

int main(int argc, char **argv)
{
    // Verificar se foram passados argumentos
    if (argc == 1) {
        std::cout << "Nenhum argumento fornecido." << std::endl;
        return 0;
    }

    for (int i = 1; argv[i]; i++)
    {
        // Capitalização total: converter todos os caracteres para maiúsculas
        to_lower(argv[i]);
        std::cout << argv[i] << std::endl;
        // Capitalização parcial: converter o primeiro caractere para maiúsculo
        to_capital(argv[i]);
        std::cout << argv[i] << std::endl;
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
/*

Evitar modificar argv[i] diretamente
⚠️ Por que isso é um problema?

O conteúdo de argv[i] vem de uma região de memória controlada pela shell.

Modificar diretamente argv[i][j] não é garantido como seguro, e pode causar comportamento indefinido em alguns sistemas.

✅ Solução ideal:
Trabalhar com uma cópia da string, usando std::string.
*/

#include <iostream> // Necessário para std::cout e std::endl
#include <cctype> // Para as funções std::tolower w std::toupper
#include <string> // Permite usar std::string, a forma segura e moderna de lidar com textos em C++

std::string to_lower(const std::string &input)
{
    std::string result = input;
    for (size_t i = 0; i < result.length(); ++i)
        result[i] = std::tolower(result[i]);
    return result;
}

std::string to_capital(const std::string &input)
{
    if (input.empty())
        return "";
    std::string result = to_lower(input);
    result[0] = std::toupper(result[0]);
    return result;
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "Nenhum argumento fornecido." << std::endl;
        return 0;
    }
    
    for (int i = 1; i < argc; ++i)
    {
        std::string lower = to_lower(argv[i]);
        std::string capital = to_capital(argv[i]);

        std::cout << lower << std::endl;
        std::cout << capital << std::endl;
    }
}
