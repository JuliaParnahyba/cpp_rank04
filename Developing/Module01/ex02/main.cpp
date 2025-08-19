/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:49:24 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/18 21:53:29 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*  Goal                                                                      */
/*    Print:                                                                  */
/*      (A) the memory addresses of:                                          */
/*          - the string variable                                             */
/*          - the string pointer                                              */
/*          - the string reference                                            */
/*      (B) the string value through:                                         */
/*          - the variable                                                    */
/*          - the pointer dereference                                         */
/*          - the reference                                                   */
/* -------------------------------------------------------------------------- */

int main() {
    std::cout << "run..." << std::endl;

    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    

    return 0;
}