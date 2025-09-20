/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:49:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/19 20:39:58 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout
#include <string>   // std::string

int main() {
    // ------------------- Declarations only (no output) ------------------- //  
    std::string s = "HI THIS IS BRAIN"; // an object: owns the character data
    std::string *stringPTR = &s;        // pointer: stores the ADDRESS of 's' (can be reseated)
    std::string &stringREF = s;         // reference: an ALIAS to 's' (must bind at init; cannot reseat)

    // ---------------- Print addresses (deterministic order) -------------- //
    std::cout << "The memory address of the string variable is: " << &s << std::endl;
    std::cout << "The memory address held by stringPTR is: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;
    
    // ----------- Print values (same content via 3 access paths) ---------- //
    std::cout << "The value of the string variable is: " << s << std::endl;
    std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
    std::cout << "The value referred to by stringREF is: " << stringREF << std::endl;

    return 0;
}
