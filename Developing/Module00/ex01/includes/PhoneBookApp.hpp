/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookApp.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:07:31 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/04 22:43:00 by jparnahy         ###   ########.fr       */
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

/* --------- PROJECT HEADERS --------- */
#include "Contact.hpp"      // Contact class
#include "PhoneBook.hpp"    // PhoneBook class

/* --------- FUNCTION PROTOTYPES --------- */
/* PhoneBookApp.cpp */
// UX-UI
void showWelcomeMessage();
void showInstructions();
void runPhoneBook();

// ADD flow
bool isPhoneNumberValid(const std::string &phone);
std::string fillContactField(const std::string &prompt, bool isPhone = false);
void handleAddContact(PhoneBook &phonebook);

#endif