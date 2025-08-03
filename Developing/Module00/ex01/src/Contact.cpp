/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 14:05:50 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setField(std::string fieldName, std::string value)
{
    std::cout << "fieldName = " << fieldName << std::endl;
    if (fieldName == "_firstName")
        _firstName = value;
    else if (fieldName == "_lastName")
        _lastName = value;
    else if (fieldName == "_nickname")
        _nickname = value;
    else if (fieldName == "_phoneNumber")
        _phoneNumber = value;
    else if (fieldName == "_darkSecret")
        _darkSecret = value;
    else
    {
        std::cout << "Invalid field name. Valid options are:\n";
        std::cout << "_firstName, _lastName, _nickname, _phoneNumber, _darkSecret" << std::endl;
    }
}

std::string Contact::getField(std::string fieldName) const
{
    if (fieldName == "_firstName")
        return _firstName;
    else if (fieldName == "_lastName")
        return _lastName;
    else if (fieldName == "_nickname")
        return _nickname;
    else if (fieldName == "_phoneNumber")
        return _phoneNumber;
    else if (fieldName == "_darkSecret")
        return "Its a secret";
    else
        return "Try the right field.";
}

//void displaySummary(int index) const;

//void displayDetails() const;
