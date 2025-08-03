/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:44:02 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/03 18:20:58 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef CONTACT_HPP
#define CONTACT_HPP

/* --------- HEADERS --------- */
#include <string> // for std::string
#include <iostream> // for std::cout
#include <iomanip> // for std::setw(10)


/* --------- CLASSES --------- */
/**
 * @class Contact
 * @brief Representa um único contato com seus dados pessoais.
 */
class Contact {
private:
    // Atributos privados que armazenam cada campo do contato.
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkSecret;

public:
    /**
     * @brief Define o valor de um campo do contato.
     * @param fieldName Nome do campo ("firstName", "lastName", etc.)
     * @param value Valor a ser atribuído.
     */
    void    setField(std::string fieldName, std::string value);
    
    /**
     * @brief Retorna o valor de um campo específico.
     * @param fieldName Nome do campo desejado.
     * @return Valor do campo.
     */
    std::string getField(std::string fieldName) const;

    /**
     * @brief Exibe o resumo do contato na tabela de listagem.
     * @param index Índice do contato no PhoneBook.
     */
    void    displaySummary(int index) const;

    /**
     * @brief Exibe todos os detalhes do contato, campo por campo.
     */
    void    displayDetails() const;
};

/* --------- AUX. FUNCTIONS --------- */
void        printHeader(void);
std::string formatField(std::string value);

#endif

