/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:25:08 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/17 22:25:13 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <exception>

int main() {
    std::cout << "Its run\n" << std::endl;

    std::cout << std::fixed << std::setprecision(8);

    std::cout << "\n=== Sanidade: comeca em 0 e caminha em eps (1/256) ===\n";
    Fixed a; // 0.0
    std::cout << "a        = " << a << "   (esperado: 0.00000000)\n";
    std::cout << "++a      = " << ++a << "   (esperado: 0.00390625)\n";
    std::cout << "a        = " << a << "   (esperado: 0.00390625)\n";
    std::cout << "a++      = " << a++ << "   (esperado: 0.00390625)  // retorna antigo\n";
    std::cout << "a (apos) = " << a   << "   (esperado: 0.00781250)\n";
    std::cout << "--a      = " << --a << "   (esperado: 0.00390625)\n";
    std::cout << "a--      = " << a-- << "   (esperado: 0.00390625)  // retorna antigo\n";
    std::cout << "a (apos) = " << a   << "   (esperado: 0.00000000)\n";

    std::cout << "\n=== Negativos: partir de -0.5 ===\n";
    Fixed n(-0.5f);
    std::cout << "n        = " << n   << "   (esperado: -0.50000000)\n";
    std::cout << "++n      = " << ++n << "   (esperado: -0.49609375)\n";
    std::cout << "n++      = " << n++ << "   (esperado: -0.49609375)\n";
    std::cout << "n (apos) = " << n   << "   (esperado: -0.49218750)\n";
    std::cout << "--n      = " << --n << "   (esperado: -0.49609375)\n";
    std::cout << "n--      = " << n-- << "   (esperado: -0.49609375)\n";
    std::cout << "n (apos) = " << n   << "   (esperado: -0.50000000)\n";

    std::cout << "\n=== Encadeamento de pre (retorna referencia) ===\n";
    Fixed c; // 0.0
    std::cout << "c        = " << c          << "   (0.00000000)\n";
    std::cout << "++(++c)  = " << ++(++c)    << "   (esperado: 0.00781250)\n";
    std::cout << "c (apos) = " << c          << "   (esperado: 0.00781250)\n";

    std::cout << "\n[OK] ++/-- testados.\n";
    return 0;
}