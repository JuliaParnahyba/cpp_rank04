/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:10 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 19:20:25 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

static Contact  includeContact(void)
{
    Contact contact; //Object to use the methods of class
    std::string _firstName, _lastName, _nickname, _phoneNumber, _darkSecret;

    std::cout << "Now lets insert the informations to include the contact.\n";

    std::cout << "Enter the first name: \n–→ ";
    std::cin >> _firstName;
    contact.setField("_firstName", _firstName);

    std::cout << "Enter the last name: \n–→ ";
    std::cin >> _lastName;
    contact.setField("_lastName", _lastName);

    std::cout << "Enter the nickname: \n–→ ";
    std::cin >> _nickname;
    contact.setField("_nickname", _nickname);

    std::cout << "Enter the phone number: \n–→ ";
    std::cin >> _phoneNumber;
    contact.setField("_phoneNumber", _phoneNumber);

    std::cout << "Enter the darkest secret: \n–→ ";
    std::cin >> _darkSecret;
    contact.setField("_darkSecret", _darkSecret);

    std::cout << "\n✅ Contact captured successfully!\n\n";
    return contact;
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {       
        std::cout << "This is the 80's Phonebook. ";
        std::cout << "Help me to include new contacts.";
        std::cout << "\n";
        std::cout << "To includ a new contact, enter 'ADD'\n";
        std::cout << "To search contacts, enter 'SEARCH'\n";
        std::cout << "To see the contact informations, enter 'DISPLAY'\n";
        std::cout << "To finish, write 'EXIT'" << std::endl;

        PhoneBook phonebook;
        
        while(1)
        {
            std::string input;

            std::cout << "\nWhat you want to do?\n";
            std::cin >> input;
            
            if (input == "EXIT")
            {
                std::cout << "Thanks for your participation." << std::endl;
                break;
            }
            else if (input == "ADD")
            {
                Contact c = includeContact();
                phonebook.addContact(c);
                std::cout << "✅ Contact added to the phonebook!\n";
            }
            else if (input == "SEARCH")
                phonebook.displayContacts();
            else
                std::cout << "I dont undestand. Please try again." << std::endl;
        }   
    }
    else
        std::cout << "Please enter only the program name." << std::endl;
    return 0;
}