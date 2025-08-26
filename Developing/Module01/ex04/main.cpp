/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:52:35 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/25 22:22:49 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedApp.hpp"

void    print_usage(const char *prog) {
    std::cout << "Usage: " << prog << " <filename> <s1> <s2>"
            << std::endl;
}

std::string empty_checker(const std::string &in, const std::string &s1) {
    if (in.empty())
        return "<filename>";
    else if (s1.empty())
        return "<s1>";
    return "";
}

int main(int argc, char **argv) {
    if (argc != 4) {
        print_usage(argv[0]);
        return 1;
    }

    const   std::string in = argv[1];
    const   std::string s1 = argv[2];
    const   std::string s2 = argv[3];

    const   std::string res = empty_checker(in, s1);
    if (!res.empty()) {
        std::cout << "Error: " << res << " must be non-empty." << std::endl;
        return 1;
    }

    SedReplacer app(in, s1, s2);
    if (!app.run())
        return 1;  
    return 0;
}
