/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:22:31 by jparnahy          #+#    #+#             */
/*   Updated: 2025/05/15 17:44:39 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    to_upper(char *args)
{
    for (int i = 0; args[i]; i++)
        std::cout << (char)std::toupper(args[i]);
}

int main(int c, char **v)
{
    if (c > 1)
    {
        for (int i = 1; i < c; i++)
            to_upper(v[i]);   
    }
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
}