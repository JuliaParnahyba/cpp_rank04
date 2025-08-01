/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:11:10 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/01 21:29:11 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main()
{
    Contact c;
    c.setField("_firstName", "Julia");
    c.setField("_lastName", "Parnahyba");
    c.setField("_nickname", "Ju");
    c.setField("_phoneNumber", "21988581324");
    c.setField("_darkSecret", "I dont have secrets");

    return 0;
}