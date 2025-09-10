/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:44:56 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/09 22:02:22 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

static void    print_usage(const char *prog) {
    std::cout << "Usage: " << prog << " LEVEL" << std::endl;
}

static int  getLevel(const std::string &input) {
    if (input == "DEBUG")
        return 0;
    else if (input == "INFO")
        return 1;
    else if (input == "WARNING") 
        return 2;
    else if (input == "ERROR")
        return 3;
    else
        return 4;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        print_usage(argv[0]);
        return 1;
    }

    HarlFilter harl;
    const int index = getLevel(std::string(argv[1]));

    switch (index) {
        case 0:
            harl.complain("DEBUG");
            break;
        case 1:
            harl.complain("INFO");
            break;
        case 2:
            harl.complain("WARNING");
            break;
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }

    return 0;
}