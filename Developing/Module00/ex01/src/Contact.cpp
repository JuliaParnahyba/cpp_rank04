/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/01 21:31:08 by jparnahy         ###   ########.fr       */
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

//string getField(std::string fieldName) const;

//void displaySummary(int index) const;

//void displayDetails() const;
