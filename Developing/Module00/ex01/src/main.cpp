/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:10 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/05 17:38:10 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookApp.hpp"

void    showInstructions()
{
    std::cout << "\n📖 Instructions\n"
            << "==================================================================\n";
    std::cout << "Main Usage:\n"
            << "  ADD           - Add a new contact\n"
            << "  SEARCH        - Search and display contacts\n"
            << "  EXIT          - Quit the program\n"
            << std::endl;
    
    std::cout << "Plus Usage:\n"
            << "  CANCEL        - Cancel current operation (when adding a contact)\n"
            << "  man phonebook - Show these instructions again\n"
            << "==================================================================\n"
            << std::endl;
}

void    showWelcomeMessage()
{
    std::cout << "\n";
    std::cout << "|================================================================|\n";
    std::cout << "|                                                                |\n";
    std::cout << "|              📞 Welcome to the 80's PhoneBook! ☎️               |\n";
    std::cout << "|          Helping you store up to 8 amazing contacts.           |\n";
    std::cout << "|                                                                |\n";
    std::cout << "|_______________________________________________ By: jparnahy ___|\n";
    std::cout << "|================================================================|\n";
    showInstructions();
}

void runPhoneBook()
{
    PhoneBook phonebook;
    std::string input;

    while (true)
    {
        std::cout << "\nWhat do you want to do?\n–→ ";
        std::getline(std::cin, input);

        if (input == "EXIT") {
            std::cout << "Thanks for using the PhoneBook!\n"
                    << " 👋 See you later..." << std::endl;
            break;
        }
        else if (input == "ADD")
            handleAddContact(phonebook);
        else if (input == "SEARCH") {
            if (phonebook.getSize() == 0) {
                std::cout << "⚠️    No contacts available."
                        << "Use ADD to create a new contact." << std::endl;
                continue;
            }
            phonebook.displayContacts();
        }
        else if (input == "man" || input == "man phonebook")
            showInstructions();
        else
            std::cout << "⚠️  Unknown command. Type 'man phonebook' for help.\n";
    }
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1) {
        std::cout << "Please run without arguments." << std::endl;
    }
    showWelcomeMessage();
    runPhoneBook();
    return 0;
}

