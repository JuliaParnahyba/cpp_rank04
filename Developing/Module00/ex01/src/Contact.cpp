/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 14:29:09 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setField(std::string fieldName, std::string value)
{
    //std::cout << "fieldName = " << fieldName << std::endl;
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

void Contact::displayDetails() const
{
    
    std::cout << "First name     : " << getField("_firstName") << std::endl;
    std::cout << "Last name      : " << getField("_lastName") << std::endl;
    std::cout << "Nickname name  : " << getField("_nickname") << std::endl;
    std::cout << "Phone Number   : " << getField("_phoneNumber") << std::endl;
    std::cout << "Darkest Secret : " << getField("_darkSecret") << std::endl;
}

//void displaySummary(int index) const;

