/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:47:27 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/01 21:04:14 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::degub(void) {
    std::cout
        << "I love having extra bacon for my "
        << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
        << "I really do!" 
        << std::endl;
}

void    Harl::info(void) {
    std::cout
        << "I cannot believe adding extra bacon costs more money. "
        << "You didn’t put enough bacon in my burger! "
        << "If you did, I wouldn’t be asking for more!" 
        << std::endl;    
}

void    Harl::warning(void) {
    std::cout
        << "I think I deserve to have some extra bacon for free. "
        << "I’ve been coming for years whereas you started "
        << "working here since last month."
        << std::endl;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

void    Harl::complain(std::string level) {
    //Dispatch table
    std::string levelS[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

}