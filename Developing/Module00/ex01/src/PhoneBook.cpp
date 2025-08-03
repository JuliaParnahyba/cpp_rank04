/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:30 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 19:19:18 by jparnahy         ###   ########.fr       */
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

/*
void    displayContactDetails(int index) const
{
    // se index < 0 ou index >=size:
    //      imprimir mensagem de erro
    // senão
    //      chama _contacts[index].displayDetails()
}

int getSize() const
{
    // returna _size
}
*/