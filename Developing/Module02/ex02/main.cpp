/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:25:08 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/15 22:41:03 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

int main() {
    std::cout << "Its run\n" << std::endl;

    std::cout << std::boolalpha;

    Fixed a;            // 0.0
    Fixed b(1);         // 1.0 (int ctor)
    Fixed c(1.5f);      // 1.5 (float ctor)
    Fixed d(-0.5f);     // -0.5
    Fixed e = c;        // copy ctor
    Fixed f;            // default ctor

    f = d;              // copy assignment 

    std::cout << "\n=== Valores ===\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    std::cout << "d = " << d << "\n";
    std::cout << "e = " << e << " (deve ser igual a c)\n";
    std::cout << "f = " << f << " (deve ser igual a d)\n";

    std::cout << "\n=== Testes básicos ===\n";
    std::cout << "a < b  ? " << (a < b)  << "  (esperado: true)\n";
    std::cout << "b > a  ? " << (b > a)  << "  (esperado: true)\n";
    std::cout << "a == a ? " << (a == a) << "  (esperado: true)\n";
    std::cout << "a != b ? " << (a != b) << "  (esperado: true)\n";

    std::cout << "\n=== Igualdade ===\n";
    std::cout << "c == e ? " << (c == e) << "  (esperado: true)\n";
    std::cout << "c != e ? " << (c != e) << "  (esperado: false)\n";
    std::cout << "d == f ? " << (d == f) << "  (esperado: true)\n";
    std::cout << "d != f ? " << (d != f) << "  (esperado: false)\n";

    std::cout << "\n=== Limites com negativos ===\n";
    std::cout << "d < a  ? " << (d < a)  << "  (esperado: true)\n";
    std::cout << "d <= a ? " << (d <= a) << "  (esperado: true)\n";
    std::cout << "a >= d ? " << (a >= d) << "  (esperado: true)\n";
    std::cout << "b <= d ? " << (b <= d) << "  (esperado: false)\n";
    std::cout << "e <= f ? " << (e <= f) << "  (esperado: false)\n";

    std::cout << "\n=== Simetria e coerencia ===\n";
    std::cout << "(a < b) && (b > a) ? " << ((a < b) && (b > a)) << "  (true)\n";
    std::cout << "(c <= e) && (c >= e)? " << ((c <= e) && (c >= e)) << "  (true)\n";

    std::cout << "\n[OK] Comparacoes testadas.\n";

    return 0;
}