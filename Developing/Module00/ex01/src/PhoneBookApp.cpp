/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookApp.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:51:18 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/05 18:31:12 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookApp.hpp"

std::string fillContactField(const std::string &prompt, bool isPhone)
{
    std::string value;
    
    while (true) {
        std::cout << prompt << "\n–→ ";
        std::getline(std::cin, value);

        if (value == "CANCEL" || value == "cancel")
            return "CANCEL";
        if (value.empty()) {
            std::cout << "⚠️ This field cannot be empty.\n";
            continue;
        }
        if (isPhone && !isPhoneNumberValid(value)) {
            std::cout << "❌ Phone number must be numeric and 11 digits.\n";
            continue;
        }
        break;
    }
    return value;
}

void    editContactField(Contact &contact)
{
    std::string choice;
    
    std::cout << "\nWhich field do you want to change?\n"
            << "1 - First name\n"
            << "2 - Last name\n"
            << "3 - Nickname\n"
            << "4 - Phone number\n"
            << "5 - Darkest secret\n–→ ";

    std::getline(std::cin, choice);
    if (choice == "1")
        contact.setField("_firstName", fillContactField("Enter the first name:"));
    else if (choice == "2")
        contact.setField("_lastName", fillContactField("Enter the last name:"));
    else if (choice == "3")
        contact.setField("_nickname", fillContactField("Enter the nickname:"));
    else if (choice == "4")
        contact.setField("_phoneNumber", fillContactField("Enter the phone number:", true));
    else if (choice == "5")
        contact.setField("_darkSecret", fillContactField("Enter the darkest secret:"));
    else
        std::cout << "⊘ Invalid option.\n";
}

bool    confirmAddSaveContact(Contact &contact, PhoneBook &phonebook)
{
    while (true) {
        std::cout << "\n________________________________\n";
        std::cout << "\n📋 Review Contact Information ↴\n";
        contact.displayDetails();
        std::cout << "________________________________\n";

        std::string confirm;
        std::cout << "\nDo you want to save this contact? (y/n)\n–→ ";
        std::getline(std::cin, confirm);
        if (confirm == "y" || confirm == "Y") {
            phonebook.addContact(contact);
            std::cout << "✓ Contact added to the phonebook!\n";
            return true;
        }
        else if (confirm == "n" || confirm == "N")
            editContactField(contact);
        else
            std::cout << "⊘ Invalid input. Please type 'y' or 'n'.\n";
    }
}

void handleAddContact(PhoneBook &phonebook)
{
    std::cout << "\n============ ADD NEW CONTACT ============\n\n";
    std::string confirm;
    Contact contact;
    
    while (true) {
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

        confirmAddSaveContact(contact, phonebook);
        
        std::string confirm;
        std::cout << "\nDo you want to save another contact? (y/n)\n–→ ";
        std::getline(std::cin, confirm);
        if (confirm == "Y" || confirm == "y")
            continue;
        else if (confirm == "N" || confirm == "n")
            return;
        else
            std::cout << "⊘ Invalid input. Please type 'y' or 'n'.\n";
    }
}
