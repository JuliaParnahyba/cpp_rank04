/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookApp.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:07:31 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/05 19:17:23 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef PHONEBOOKAPP_HPP
#define PHONEBOOKAPP_HPP

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // for std::string
#include <iostream> // for std::cout, std::cin, std::getline
#include <limits>   // for std::numeric_limits, to clear buffer befor getline
#include <iomanip>  // for std::setw
#include <cstdlib>  // for std::atoi
#include <cctype>   // for std::isdigit

/* --------- PROJECT HEADERS --------- */
#include "Contact.hpp"      // Contact class
#include "PhoneBook.hpp"    // PhoneBook class

/* --------- FUNCTION PROTOTYPES --------- */
/* ------ AUX. FUNCTIONS ------ */
void        runPhoneBook();

// UX-UI
void        showWelcomeMessage();
void        showInstructions();

bool        isPhoneNumberValid(const std::string &phone);
std::string fillContactField(const std::string &prompt, bool isPhone = false);
void        editContactField(Contact &contact);
bool        confirmAddSaveContact(Contact &contact, PhoneBook &phonebook);
void        handleAddContact(PhoneBook &phonebook);

/**
 * @brief Formats a string for table display (width=10, truncate if necessary)
 * @param value The string to format
 * @return The formatted string
 */
std::string formatField(const std::string &value);

std::string formatNameCase(const std::string &input);
std::string formatSetenceCase(const std::string &input);
std::string formatPhoneNumber(const std::string &input);

#endif