/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:44:02 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/04 22:42:33 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef CONTACT_HPP
#define CONTACT_HPP

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // for std::string
#include <iostream> // for std::cout, std::cin, std::getline
#include <limits>   // for std::numeric_limits, to clear buffer befor getline
#include <iomanip>  // for std::setw(10)

/* --------- CLASS --------- */
/**
 * @class Contact
 * @brief Represents a single contact with personal data
 */
class Contact {
private:
    std::string _firstName;     // First name of the contact
    std::string _lastName;      // Last name of the contact
    std::string _nickname;      // Nickname of the contact
    std::string _phoneNumber;   // Phone number of the contact
    std::string _darkSecret;    // The contact's darkest secret

public:
    /**
     * @brief Sets the value of a specific field
     * @param fieldName The name of the field ("_firstName", "_lastName", etc.)
     * @param value The value to assign to the field
     */
    void    setField(const std::string &fieldName, const std::string &value);
    
    /**
     * @brief Gets the value of a specific field
     * @param fieldName The name of the field to retrieve
     * @return The value of the requested field, or a default message if invalid
     */
    std::string getField(const std::string &fieldName) const;

    /**
     * @brief Display the contact in a table row format
     * @param index The index of the contact in the phonebook
     */
    void    displaySummary(int index) const;

    /**
     * @brief Display all details of the contact
     */
    void    displayDetails() const;
};

/* --------- AUX. FUNCTIONS --------- */
/**
 * @brief Formats a string for table display (width=10, truncate if necessary)
 * @param value The string to format
 * @return The formatted string
 */
std::string formatField(const std::string &value);

#endif

