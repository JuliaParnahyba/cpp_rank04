/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/04 18:31:56 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setField(const std::string &fieldName, const std::string &value)
{
    if (fieldName == "_firstName")
        this->_firstName = value;
    else if (fieldName == "_lastName")
        this->_lastName = value;
    else if (fieldName == "_nickname")
        this->_nickname = value;
    else if (fieldName == "_phoneNumber")
        this->_phoneNumber = value;
    else if (fieldName == "_darkSecret")
        this->_darkSecret = value;
    else {
        std::cout << "Invalid field name. Valid options are:\n"
                << "_firstName, _lastName, _nickname, _phoneNumber, _darkSecret"
                << std::endl;
    }
}

std::string Contact::getField(const std::string &fieldName) const
{
    if (fieldName == "_firstName")
        return this->_firstName;
    else if (fieldName == "_lastName")
        return this->_lastName;
    else if (fieldName == "_nickname")
        return this->_nickname;
    else if (fieldName == "_phoneNumber")
        return this->_phoneNumber;
    else if (fieldName == "_darkSecret")
        return this->_darkSecret;
    return "Invalid field name.";
}

void Contact::displayDetails() const
{
    std::cout << "First name     : " << this->getField("_firstName") << std::endl;
    std::cout << "Last name      : " << this->getField("_lastName") << std::endl;
    std::cout << "Nickname       : " << this->getField("_nickname") << std::endl;
    std::cout << "Phone Number   : " << this->getField("_phoneNumber") << std::endl;
    std::cout << "Darkest Secret : " << this->getField("_darkSecret") << std::endl;
}

void Contact::displaySummary(int index) const
{
    std::cout << "|" << std::setw(10) << index << "|"
            << formatField(this->getField("_firstName")) << "|"
            << formatField(this->getField("_lastName")) << "|"
            << formatField(this->getField("_nickname")) << "|"
            << std::endl;
}

