/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:49:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/18 22:21:27 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout
#include <string>   // std::string

/**
 *  Goal                                                               
 *    Print:                                                           
 *      (A) the memory addresses of:                                   
 *          - the string variable                                      
 *          - the string pointer                                       
 *          - the string reference                                     
 *      (B) the string value through:                                  
 *          - the variable                                             
 *          - the pointer dereference                                  
 *          - the reference                                            
 *                                                                     
 *  Required output (deterministic order)                              
 *    Addresses:                                                       
 *      The memory address of the string variable is: <address_of_s>   
 *      The memory address held by stringPTR is: <address_in_stringPTR>
 *      The memory address held by stringREF is: <address_of_s_via_ref>
 *                                                                     
 *    Values:                                                          
 *      The value of the string variable is: HI THIS IS BRAIN          
 *      The value pointed to by stringPTR is: HI THIS IS BRAIN         
 *      The value referred to by stringREF is: HI THIS IS BRAIN        
 */

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

    // ------------ Run tests (same content via 3 access paths) ----------- //
    #ifdef RUN_TESTS
    std::cout << "\n[TEST] --- Aliasing & mutation demo ---" << std::endl;

    // Snapshot inicial
    std::cout << "[TEST] start: s='" << s 
            << "', *stringPTR='" << *stringPTR 
            << "', stringREF='" << stringREF << "'" << std::endl;

    // 1) Mutação via variável
    s += "!!!";
    std::cout << "[TEST] after s += \"!!!\": s='" << s 
            << "', *stringPTR='" << *stringPTR 
            << "', stringREF='" << stringREF << "'" << std::endl;

    // 2) Mutação via ponteiro
    *stringPTR = "PTR writes NEW CONTENT";
    std::cout << "[TEST] after *stringPTR=...: s='" << s 
            << "', *stringPTR='" << *stringPTR 
            << "', stringREF='" << stringREF << "'" << std::endl;

    // 3) Mutação via referência
    stringREF = "REF writes NEW CONTENT";
    std::cout << "[TEST] after stringREF=...: s='" << s 
            << "', *stringPTR='" << *stringPTR 
            << "', stringREF='" << stringREF << "'" << std::endl;

    // 4) Sanity: endereços permanecem os mesmos
    std::cout << "[TEST] addresses stable? "
            << "(&s == stringPTR: " << ((&s == stringPTR) ? "yes" : "no") << ", "
            << "&s == &stringREF: " << ((&s == &stringREF) ? "yes" : "no") << ")"
            << std::endl;
    #endif

    return 0;
}
