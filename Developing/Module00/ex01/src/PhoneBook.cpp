/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:30 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/05 17:14:11 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
    this->_size = 0;
}

void    PhoneBook::addContact(const Contact &newContact)
{
    this->_contacts[this->_index] = newContact;

    if (this->_size < 8)
        this->_size++;
    this->_index++;
    if (this->_index == 8)
        this->_index = 0;
}

void    PhoneBook::displayContactDetails() const
{
    std::string input;
    int index;
    
    std::cout << "\nPlease, Enter the index of the contact to display:";
    while (true) {
        std::cout << "\n–→ ";
        std::getline(std::cin, input);
        bool isNumber = isNumericString(input);
        if (!isNumber) {
            std::cout << "❌ Invalid input. Please enter a number.";
            continue;
        }
        index = std::atoi(input.c_str());
        if (index < 1 || index > this->_size) {
            std::cerr << "❌ Invalid index. Please choose a number between 1 and "
                    << this->_size << ".";
            continue;
        }
        break;
    }
    this->_contacts[index - 1].displayDetails();
}

bool    PhoneBook::detailsLoop() const
{
    std::string choice;
    while (true) {
        this->displayContactDetails();
        std::cout << "\nDo you want to see another contact's details? (y/n)\n–→ ";
        std::getline(std::cin, choice);
        if (choice == "y" || choice == "Y")
            continue;
        else if (choice == "n" || choice == "N")
            return false;
        else
            std::cout << "❌ Invalid input. Please type 'y' or 'n'.\n";
    }
}

void    PhoneBook::displayContacts() const
{
    printHeader();
    for (int i = 0; i < this->_size; i++)
        this->_contacts[i].displaySummary(i + 1);
    std::string choice;
    while (true) {
        std::cout << "\nDo you want to see some contact details? (y/n)\n–→ ";
        std::getline(std::cin, choice);
        if (choice == "y" || choice == "Y") {
            if (!detailsLoop())
                return;
        }
        else if (choice == "n" || choice == "N")
            return;
        else
            std::cout << "❌ Invalid input. Please type 'y' or 'n'.\n";
    }
}

int PhoneBook::getSize() const
{
    return this->_size;
}