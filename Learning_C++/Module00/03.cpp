/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo:    03.cpp                                                    */
/*    Criado por: jparnahy <jparnahy@student.42.rio>                        */
/*    Data:       2025/05/20                                                */
/*                                                                          */
/*    Descrição: Exemplo de uso de argc e argv e manipulação de argumentos  */
/*                                                                          */
/* ************************************************************************ */

/*
** ex03: Verifique se algum argumento é um número
**
** Crie um programa que verifique se cada argumento contém apenas dígitos e
** imprima uma linha por argumento indicando se é numérico ou não.
**
** Exemplo:
** $ ./check_digits 42 hello 1234
** "42" is numeric
** "hello" is not numeric
** "1234" is numeric
**
*/


#include <iostream>
#include <cctype>

void    check_digits(char *args)
{
    int i = 0;

    while (args[i])
    {
        if (!isdigit(args[i]))
            break;
        i++;
    }
    if (!args[i])
        std::cout << "\"" << args << "\" is numeric" << std::endl;
    else if (args[i])
        std::cout << "\"" << args << "\" is not numeric" << std::endl;
}

int main(int c, char **v)
{
    if (c > 1)
    {
        for (int i = 1; i < c; i++)
            check_digits(v[i]);
    }
    else
        std::cout << "Please, introduce one or more arguments" << std::endl;
    return (0);
}


/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */


/*
#include <iostream>
#include <cctype>

void    check_digits(char *args)
{
    for (int i = 0; args[i]; i++)
    {
        if (!std::isdigit(args[i]))
        {
            std::cout << "\"" << args << "\" is not numeric" << std::endl;
            return;
        }
    }
    std::cout << "\"" << args << "\" is numeric" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
            check_digits(argv[i]);
    }
    else
        std::cout << "Please, introduce one or more arguments" << std::endl;
    return (0);  
}
*/