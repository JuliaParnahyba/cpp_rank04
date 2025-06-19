/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo:    04.cpp                                                    */
/*    Criado por: jparnahy <jparnahy@student.42.rio>                        */
/*    Data:       2025/06/19                                                */
/*                                                                          */
/*    Descrição: Praticar a saída de dados no terminal usando std::cout     */
/*               e std::endl, incluindo formatação simples, concatenação    */
/*               de textos e tipos de dados.                                */  
/*                                                                          */
/* ************************************************************************ */

/*
** ex03: Imprima seu nome e idade
**
** Crie um programa que Imprima seu nome (literal) e sua idade (literal ou
** variável). Use std::cout e std::endl.
**
** Exemplo:
** $ ./04 
** Meu nome é Julia Parnahyba e tenho 37 anos.
**
*/

#include <iostream>

// Função principal que imprime o nome e a idade
int main()
{
    // Definindo constantes para o nome e idade
    const char *name = "Julia Parnahyba";
    const int age = 37;

    // Imprimindo a mensagem formatada
    std::cout << "Meu nome é " << name << " e tenho " << age << " anos." << std::endl;

    return 0;
}


/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */

/*
#include <iostream>
#include <string> // necessário para std::string

int main()
{
    const std::string name = "Julia Parnahyba";
    const int age = 37;

    std::cout << "Meu nome é " << name << " e tenho " << age << " anos." << std::endl;

    return 0;
}
*/
