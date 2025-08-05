/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UtilsFormat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:48:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/05 19:34:54 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookApp.hpp"

std::string formatField(const std::string &value)
{
    if (value.length() > 10)
        return value.substr(0, 9) + ".";
    return std::string(10 - value.length(), ' ') + value;
}

std::string trimAndReduceSpaces(const std::string &input)
{
    std::string result;
    bool inSpace = false;

    for (size_t i = 0; i < input.length(); i++) {
        char c = input[i];
        if (std::isspace(static_cast<unsigned char>(c))) {
            if (!inSpace && !result.empty())
                result += ' ';
            inSpace = true;
        }
        else {
            result += c;
            inSpace = false;
        }
    }
    if (!result.empty() && result[result.length() - 1] == ' ')
        result.erase(result.length() - 1);
    return result;
}

std::string formatNameCase(const std::string &input)
{
    std::string result = trimAndReduceSpaces(input);
    bool newWord = true;
    
    for (size_t i = 0; i < result.length(); i++) {
        if (std::isspace(static_cast<unsigned char>(result[i])))
            newWord = true;
        else {
            if (newWord) {
                result[i] = std::toupper(static_cast<unsigned char>(result[i]));
                newWord = false;
            }
            else
                result[i] = std::tolower(static_cast<unsigned char>(result[i]));
        }
    }
    return result;
}

std::string formatSetenceCase(const std::string &input)
{
    std::string result = trimAndReduceSpaces(input);
    
    if (!result.empty()){
        result[0] = std::toupper(static_cast<unsigned char>(result[0]));
        for (size_t i = 1; i < result.length(); i++)
            result[i] = std::tolower(static_cast<unsigned char>(result[i]));
    }
    return result;
}

std::string formatPhoneNumber(const std::string &input)
{
    std::string formatted = "(" + input.substr(0, 2) + ")" +
                            input.substr(2, 5) + "-" +
                            input.substr(7, 4);
    return formatted;
}