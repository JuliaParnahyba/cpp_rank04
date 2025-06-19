/* ************************************************************************ */
/*                                                                          */
/*    Projeto de Estudos em C++ - por Julia Parnahyba                       */
/*                                                                          */
/*    Arquivo     : 11.cpp                                                  */
/*    Criado por  : jparnahy <jparnahy@student.42.rio>                      */
/*    Data        : 2025/06/19                                              */
/*                                                                          */
/*    Descrição   : Strings em C++ (`std::string` vs `char*`)               */
/*                                                                          */
/* ************************************************************************ */

/*
**
** ex11: Conte quantas vogais há em cada argumento
**
** Crie um programa que:
** - Para cada argumento passado (exceto o nome do programa), conte quantas vogais (maiúsculas ou minúsculas) há
** - Imprima o argumento e a contagem correspondente
**
** Exemplo:
** $ ./11 Julia É Incrível
** "Julia" has 3 vowels
** "É" has 1 vowel
** "Incrível" has 3 vowels
**
*/

#include <iostream>
#include <string>
#include <cctype>

int count_vowels(const std::string& word)
{
    int count = 0;
    for (size_t i = 0; i < word.length(); ++i)
    {
        char c = std::tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

int main(int argc, char** argv)
{
    if (argc == 1) {
        std::cout << "Nenhum argumento fornecido." << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        std::string word = argv[i];
        int vowels = count_vowels(word);
        std::cout << "\"" << word << "\" has " << vowels << " vowel";
        if (vowels != 1)
            std::cout << "s";
        std::cout << std::endl;
    }
    return 0;
}



/* ************************************************************************ */
/*                                                                          */
/*          ##### C O R R E Ç Ã O   /  M E L H O R I A S ######             */
/*                                                                          */
/* ************************************************************************ */

/* ÁREA DESTINADA À CORREÇÕES OU MELHORIAS DO CÓDIGO ENVIADO */