/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:10 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 14:38:27 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static void addContact(void)
{
    Contact contact; //Object to use the methods of class
    
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkSecret;

    std::cout << "Now get the informations to include the contact.\n";

    std::cout << "Enter the first name: ";
    std::cin >> _firstName;
    contact.setField("_firstName", _firstName);

    std::cout << "Enter the last name: ";
    std::cin >> _lastName;
    contact.setField("_lastName", _lastName);

    std::cout << "Enter the nickname: ";
    std::cin >> _nickname;
    contact.setField("_nickname", _nickname);

    std::cout << "Enter the phone number: ";
    std::cin >> _phoneNumber;
    contact.setField("_phoneNumber", _phoneNumber);

    std::cout << "Enter the darkest secret: ";
    std::cin >> _darkSecret;
    contact.setField("_darkSecret", _darkSecret);

    std::cout << "\n✅ Contact added! Here's the full data:\n\n";
    contact.displayDetails();
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
                addContact();
            else if (input == "SEARCH")
                std::cout << "Search method isnt ready." << std::endl;
            else if (input == "DISPLAY")
                std::cout << "Display method isnt ready." << std::endl;
            else
                std::cout << "I dont undestand. Please try again." << std::endl;
        }   
    }
    else
        std::cout << "Please enter only the program name." << std::endl;
    return 0;
}