/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:09:22 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/04 22:38:33 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>     // for std:cout, std::cin, std::getline

/* --------- PROJECT HEADERS --------- */
#include "Contact.hpp"  // the Contact class

/* --------- CLASS --------- */
/**
 * @class PhoneBook
 * @brief Stores up to 8 contacts and provides operations to manage them
 */
class PhoneBook {
private:
    Contact _contacts[8];   // Array to store up to 8 contacts
    int     _index;         // Index of the next position to insert a contact
    int     _size;          // Current number of stored contacts (max 8)

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
    void    addContact(const Contact &newContact);

    /**
     * @brief Display a list of all contacts as a table
     */
    void    displayContacts() const;

    /**
     * @brief Displays all details of a specific contact
     * Prompts the user for the index and validates the input
     */
    void    displayContactDetails() const;

    /**
     * @brief Returns how many valid contacts are currently stored
     * @return The current number os stored contacts
     */
    int getSize() const;
};

/* --------- AUX. FUNCTIONS --------- */
/**
 * @brief Prints the table header for contact listing
 */
void        printHeader(void);

#endif