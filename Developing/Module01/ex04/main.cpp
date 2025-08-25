/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:52:35 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/25 19:06:32 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    print_usage() {
    std::cout << "Usage: ./sed_is_for_losers <filename> <s1> <s2>"
            << std::endl;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        print_usage();
        return 1;
    }

    const   std::string in = argv[1];
    const   std::string s1 = argv[2];
    const   std::string s2 = argv[3];

    if (s1.empty()) {
        std::cout << "Error: s1 must be non-empty." << std::endl;
        return 1;
    }

    std::cout << "The <filename> is: " << in << std::endl;
    std::cout << "The s1 is: " << s1 << std::endl;
    std::cout << "The s2 is: " << s2 << std::endl;
    
    return 0;
}
