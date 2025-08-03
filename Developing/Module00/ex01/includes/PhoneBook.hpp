/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:09:22 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 18:18:47 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

/* --------- HEADERS --------- */
#include "Contact.hpp" // to use the Contact Class
#include <iostream> // for std:cout and std::cin

/* --------- CLASSES --------- */
/**
 * @class PhoneBook
 * @brief Stores up to 8 contacts and provides operations to manage them
 */
class PhoneBook {
private:
    Contact _contacts[8];   // array to store 8 positions
    int     _index;         // index of the next position to insert a contact
    int     _size;          // current number of stored contacts (max 8)

public:
    /**
     * @brief Constructor. Initializes internal counters.
     */
    PhoneBook();
    
    /**
     * @brief Adds a new contact to the phonebook
     * If the phonebook is full, it overwrites the oldest one
     * @param newContact The contact object to store
     */
    void    addContact(Contact newContact);

    /**
     * @brief Display a list of all contacts as a table
     */
    void    displayContacts() const;

    /**
     * @brief Displays all details of a specific contact
     * @param index Index od the contact to display (0 to 7)
     */
    void    displayContactDetails(int index) const;

    /**
     * @brief Returns how many valid contacts are currently stored
     * @return The current number os stored contacts
     */
    int getSize() const;
};

#endif