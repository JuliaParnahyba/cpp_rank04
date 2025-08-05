/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:03:34 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/05 18:48:47 by jparnahy         ###   ########.fr       */
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
bool        isNumericString(const std::string &str)
{
    if (str.empty())
        return false;
    for (size_t i = 0; i <str.length(); i++) {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    }
    return true;
}