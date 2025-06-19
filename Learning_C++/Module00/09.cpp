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
** ex09: Função que retorna uma string transformada (não imprime diretamente)
**
** Crie um programa que tenha a seguinte função:
** `std::string repeat_string(const std::string& input, int times);`
**
** - Ela deve retornar a string repetida n vezes
** - O main() deve apenas chamar essa função e imprimir o resultado
** - Faça a leitura do texto e da quantidade pelo std::cin
**
** Exemplo:
** $ ./09
** Digite a palavra: ola
** Quantas vezes repetir? 3
** Resultado: olaolaola
**
*/

/*
#include <iostream>
#include <cctype>
#include <string>

std::string repeat_string(const std::string& input, int times)
{
    std::string result;

    for (size_t i = 0; i < times; i++)
        result += input;
    return result;
}

int main(int argc, char **argv)
{
    int rpt = 0;
    std::string input;
    
    std::cout << "Digite uma palavra: ";
    std::cin >> input;
    std::cout << "Quantas vezes repetir? ";
    std::cin >> rpt; 
    std::string result = repeat_string(input, rpt);
    std::cout << "Resultado: " << result << std::endl;
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
#include <limits>

// Melhoramento com pré-alocação do tamanho final à string result
std::string repeat_string(const std::string& input, int times)
{
    std::string result;
    result.reserve(input.size() * times); // evita realocações internas, pq passa o tamanho final

    for (size_t i = 0; i < times; i++)
        result += input;
    return result;
}

// Melhoramento com verificação do valor de input para as repetições.
int main(int argc, char **argv)
{
    int rpt = 0;
    std::string input;
    
    std::cout << "Digite uma palavra: ";
    std::cin >> input;

    std::cout << "Quantas vezes repetir? ";
    while (!(std::cin >> rpt) || rpt < 0) {
        std::cerr << "Erro: entrada inválida.\nPor favor, insira um número: ";
        // Se a entrada falhar, limpa o estado de erro e ignora a linha
        std::cin.clear(); // Limpa o estado de erro
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora a linha inválida
    }
    
    std::string result = repeat_string(input, rpt);
    std::cout << "Resultado: " << result << std::endl;
    return 0;
}