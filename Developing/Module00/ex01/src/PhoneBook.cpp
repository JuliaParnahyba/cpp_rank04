/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:30 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 21:24:13 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
    this->_size = 0;
}

void    PhoneBook::addContact(Contact newContact)
{
    this->_contacts[this->_index] = newContact;

    if (this->_size < 8)
        this->_size++;

    this->_index++;

    if (_index == 8)
        this->_index = 0;
}

void    PhoneBook::displayContacts() const
{
    printHeader();
    
    for (int i = 0; i < this->_size; i++)
        this->_contacts[i].displaySummary(i + 1);
}

void    PhoneBook::displayContactDetails() const
{
    int index;
    
    std::cout << "Enter the index of the contact to display:";
    while (true)
    {
        std::cout << "\n–→ ";
        if (!(std::cin >> index))
        {
            std::cerr << "Invalid input. Please enter a valid number.";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (index < 0 || index >= this->_size)
        {
            std::cerr << "Invalid index. Please choose a number between 1 and "
                    << this->_size << ".";
            continue;
        }
        break;
    }
    this->_contacts[index - 1].displayDetails();
}

int PhoneBook::getSize() const
{
    returna this->_size
}