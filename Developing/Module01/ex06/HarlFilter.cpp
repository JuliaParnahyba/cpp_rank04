/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:47:27 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/09 22:01:33 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

void    HarlFilter::degub(void) {
    std::cout
        << "[ DEBUG ]\n"
        << "I love having extra bacon for my "
        << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
        << "I really do!" 
        << std::endl;
}

void    HarlFilter::info(void) {
    std::cout
        << "[ INFO ]\n"
        << "I cannot believe adding extra bacon costs more money.\n"
        << "You didn’t put enough bacon in my burger!\n"
        << "If you did, I wouldn’t be asking for more!\n" 
        << std::endl;    
}

void    HarlFilter::warning(void) {
    std::cout
        << "[ WARNING ]\n"
        << "I think I deserve to have some extra bacon for free.\n"
        << "I’ve been coming for years whereas you started "
        << "working here since last month."
        << std::endl;
}

void    HarlFilter::error(void) {
    std::cout
        << "[ ERROR ]\n" 
        << "This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

void    HarlFilter::complain(std::string level) {
    //Dispatch table
    const std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    void (HarlFilter::*fn[4])(void) = { 
        &HarlFilter::degub,
        &HarlFilter::info,
        &HarlFilter::warning,
        &HarlFilter::error
    };

    for (int i = 0; i < 4; i++){
        if (level == levels[i]) {
            (this->*fn[i])();
            return;
        }
    }

}