/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo:    05.cpp                                                    */
/*    Criado por: jparnahy <jparnahy@student.42.rio>                        */
/*    Data:       2025/06/19                                                */
/*                                                                          */
/*    Descrição: Praticar a saída de dados no terminal usando std::cout     */
/*               e std::endl, incluindo formatação simples, concatenação    */
/*               de textos e tipos de dados.                                */  
/*                                                                          */
/* ************************************************************************ */

/*
** ex05: Leia dois números e imprima a soma
**
** Crie um programa que solicite dois números ao usuário usando std::cout,
** Leia os valores usando std::cin e imprima a soma dos dois números.
**
** Exemplo:
** $ ./05
** Digite o primeiro número: 5
** Digite o segundo número: 10
** A soma é: 15
**
*/
/*
#include <iostream>

// Função principal que lê dois números e imprime a soma
int main()
{
    // Declaração das variáveis para armazenar os números e a soma
    int num1, num2, sum;

    // Solicita o primeiro número ao usuário
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    // Solicita o segundo número ao usuário
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    // Calcula a soma dos dois números
    sum = num1 + num2;

    // Imprime o resultado da soma
    std::cout << "A soma é: " << sum << std::endl;
    return 0;
}
*/



/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */

/*
#include <iostream>

// Função principal que lê dois números e imprime a soma
int main()
{
    // Declaração das variáveis para armazenar os números e a soma
    int num1 = 0, num2 = 0;

    // Solicita o primeiro número ao usuário
    std::cout << "Digite o primeiro número: ";
    if (!(std::cin >> num1)) {
        std::cerr << "Erro: entrada inválida para o primeiro número." << std::endl;
        return 1;
    }

    // Solicita o segundo número ao usuário
    std::cout << "Digite o segundo número: ";
    if (!(std::cin >> num2)) {
        std::cerr << "Erro: entrada inválida para o segundo número." << std::endl;
        return 1;
    }

    // Imprime diretamente o resultado da soma, com operação na string de saída
    std::cout << "A soma é: " << (num1 + num2) << std::endl;
    return 0;
}
*/

/* ************************************************************************ */

#include <iostream>
#include <limits> // Necessário para std::numeric_limits

// Função principal que lê dois números e imprime a soma
int main()
{
    // Declaração das variáveis para armazenar os números e a soma
    int num1 = 0, num2 = 0;

    // Solicita o primeiro número ao usuário
    std::cout << "Digite o primeiro número: ";
    while (!(std::cin >> num1)) {
        std::cerr << "Erro: entrada inválida.\nPor favor, insira um número: ";
        // Se a entrada falhar, limpa o estado de erro e ignora a linha
        std::cin.clear(); // Limpa o estado de erro
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora a linha inválida
    }

    // Solicita o segundo número ao usuário
    std::cout << "Digite o segundo número: ";
    while (!(std::cin >> num2)) {
        std::cerr << "Erro: entrada inválida.\nPor favor, insira um número: ";
        // Se a entrada falhar, limpa o estado de erro e ignora a linha
        std::cin.clear(); // Limpa o estado de erro
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora a linha inválida
    }

    // Imprime diretamente o resultado da soma, com operação na string de saída
    std::cout << "A soma é: " << (num1 + num2) << std::endl;
    return 0;
}