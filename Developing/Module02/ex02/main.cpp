/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:25:08 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/18 21:28:37 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <exception>

int main() {
    std::cout << "Its run\n" << std::endl;

    std::cout << std::boolalpha << std::fixed << std::setprecision(6);

    Fixed a(1.5f), b(2.0f);
    std::cout << "\n=== Basico ===\n";
    std::cout << "a = " << a << "   b = " << b << "\n";
    Fixed &mn = Fixed::min(a, b);
    Fixed &mx = Fixed::max(a, b);
    std::cout << "min(a,b) = " << mn << "   (esperado: 1.500000)\n";
    std::cout << "max(a,b) = " << mx << "   (esperado: 2.000000)\n";

    std::cout << "\n=== Mutabilidade (nao-const) ===\n";
    std::cout << "antes:  a = " << a << "   b = " << b << "\n";
    Fixed::min(a, b)++; // incrementa o menor em +1/256
    std::cout << "depois: a = " << a << "   b = " << b << "   (esperado: a cresceu +1/256)\n";

    std::cout << "\n=== Negativos ===\n";
    Fixed m(-0.5f), n(3.0f);
    std::cout << "min(m,n) = " << Fixed::min(m,n) << "   (esperado: -0.500000)\n";
    std::cout << "max(m,n) = " << Fixed::max(m,n) << "   (esperado: 3.000000)\n";

    std::cout << "\n=== Empate (sua politica: min->2o, max->1o) ===\n";
    Fixed c(1.5f), e(1.5f);
    Fixed &rmin = Fixed::min(c, e);
    Fixed &rmax = Fixed::max(c, e);
    std::cout << "c = " << c << "   e = " << e << "\n";
    std::cout << "&min(c,e) == &e ? " << (&rmin == &e) << "   (esperado: true)\n";
    std::cout << "&max(c,e) == &c ? " << (&rmax == &c) << "   (esperado: true)\n";

    std::cout << "\n=== Versoes const ===\n";
    Fixed const ca(a), cb(b);
    Fixed const &rminc = Fixed::min(ca, cb);
    Fixed const &rmaxc = Fixed::max(ca, cb);
    std::cout << "min(const) = " << rminc << "   max(const) = " << rmaxc << "\n";
    // rminc++; // descomente p/ ver que nao compila (retorno const)

    std::cout << "\n[OK] min/max testados.\n";
    return 0;
}