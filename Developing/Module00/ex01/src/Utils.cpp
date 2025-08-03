/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:03:34 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 16:38:55 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    printHeader(void)
{
    std::cout << "|";
    std::cout << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;
}

std::string formatField(std::string value)
{
    if (value.length() > 10)
        return value.substr(0, 9) + ".";
    return std::string(10 - value.length(), ' ') + value;
}