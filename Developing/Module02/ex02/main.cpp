/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:25:08 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/18 00:43:16 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <exception>

int main() {
    std::cout << "Its run\n" << std::endl;

    std::cout << std::boolalpha << std::fixed << std::setprecision(6);

    Fixed a(1.5f), b(2.0f), z(0.0f);
    Fixed m(-0.5f), n(3.0f);
    Fixed p(-3.0f), q(2.0f);

    std::cout << "\n=== Valores ===\n";
    std::cout << "a = " << a << "  b = " << b << "  z = " << z << "\n";
    std::cout << "m = " << m << "  n = " << n << "  p = " << p << "  q = " << q << "\n";

    std::cout << "\n=== Soma / Subtracao ===\n";
    std::cout << "a + b = " << (a + b) << "  (esperado: 3.500000)\n";
    std::cout << "b - a = " << (b - a) << "  (esperado: 0.500000)\n";
    std::cout << "a - b = " << (a - b) << "  (esperado: -0.500000)\n";

    std::cout << "\n=== Multiplicacao ===\n";
    std::cout << "a * b = " << (a * b) << "  (esperado: 3.000000)\n";
    std::cout << "m * n = " << (m * n) << "  (esperado: -1.500000)\n";
    std::cout << "b * z = " << (b * z) << "  (esperado: 0.000000)\n";

    std::cout << "\n=== Divisao ===\n";
    std::cout << "a / b = " << (a / b) << "  (esperado: 0.750000)\n";
    std::cout << "b / a = " << (b / a) << "  (≈ 1.333333)\n";
    std::cout << "p / q = " << (p / q) << "  (esperado: -1.500000)\n";
    std::cout << "z / b = " << (z / b) << "  (esperado: 0.000000)\n";

    std::cout << "\n=== Identidades ===\n";
    Fixed one(1), half(0.5f);
    std::cout << "a * 1 = " << (a * one) << "  (esperado: " << a << ")\n";
    std::cout << "a / 1 = " << (a / one) << "  (esperado: " << a << ")\n";
    std::cout << "a + 0 = " << (a + z) << "  (esperado: " << a << ")\n";
    std::cout << "a - 0 = " << (a - z) << "  (esperado: " << a << ")\n";

    std::cout << "\n=== Divisao por zero (excecao) ===\n";
    try {
        std::cout << "a / 0 = ";
        std::cout << (a / z) << "\n"; // deve lançar
    } catch (const std::exception& e) {
        std::cout << "excecao capturada: " << e.what() << "\n";
    }

    std::cout << "\n[OK] Aritmetica testada.\n";
    return 0;
}