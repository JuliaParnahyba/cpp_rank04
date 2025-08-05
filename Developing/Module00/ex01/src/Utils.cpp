/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:03:34 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/05 00:06:07 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookApp.hpp"

void    printHeader(void)
{
    std::cout << "|" << std::setw(10) << "Index"
            << "|" << std::setw(10) << "First Name"
            << "|" << std::setw(10) << "Last Name"
            << "|" << std::setw(10) << "Nickname"
            << "|" << std::endl;
}

std::string formatField(const std::string &value)
{
    if (value.length() > 10)
        return value.substr(0, 9) + ".";
    return std::string(10 - value.length(), ' ') + value;
}

bool    isPhoneNumberValid(const std::string &phone)
{
    if (phone.length() != 11)
        return false;
    for (size_t i = 0; i < phone.length(); i++) {
        if (!isdigit(phone[i]))
            return false;
    }
    return true;
    
}