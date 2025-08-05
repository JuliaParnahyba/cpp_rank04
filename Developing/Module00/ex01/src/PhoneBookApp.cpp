/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookApp.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:51:18 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/04 23:55:57 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookApp.hpp"

std::string fillContactField(const std::string &prompt, bool isPhone)
{
    std::string value;
    while (true)
    {
        std::cout << prompt << "\n–→ ";
        std::getline(std::cin, value);

        if (value == "CANCEL")
            return value;

        if (value.empty())
        {
            std::cout << "⚠️ This field cannot be empty.\n";
            continue;
        }
        if (isPhone && !isPhoneNumberValid(value))
        {
            std::cout << "❌ Phone number must be numeric and up to 11 digits.\n";
            continue;
        }
        break;
    }
    return value;
}

void handleAddContact(PhoneBook &phonebook)
{
    Contact contact;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string firstName = fillContactField("Enter the first name:");
    if (firstName == "CANCEL") return;
    contact.setField("_firstName", firstName);

    std::string lastName = fillContactField("Enter the last name:");
    if (lastName == "CANCEL") return;
    contact.setField("_lastName", lastName);

    std::string nickname = fillContactField("Enter the nickname:");
    if (nickname == "CANCEL") return;
    contact.setField("_nickname", nickname);

    std::string phoneNumber = fillContactField("Enter the phone number:", true);
    if (phoneNumber == "CANCEL") return;
    contact.setField("_phoneNumber", phoneNumber);

    std::string darkSecret = fillContactField("Enter the darkest secret:");
    if (darkSecret == "CANCEL") return;
    contact.setField("_darkSecret", darkSecret);

    std::cout << "\n📋 Review Contact Information:\n";
    contact.displayDetails();

    std::string confirm;
    std::cout << "\nDo you want to save this contact? (y/n)\n–→ ";
    std::getline(std::cin, confirm);
    if (confirm != "y" && confirm != "Y")
    {
        std::cout << "❌ Contact not saved.\n";
        return;
    }

    phonebook.addContact(contact);
    std::cout << "✅ Contact added to the phonebook!\n";
}
