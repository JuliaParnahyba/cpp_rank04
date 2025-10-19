/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:33:40 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/19 19:33:41 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef WRONGANIMAL_HPP    // start include guard: prevent multiple inclusion
#define WRONGANIMAL_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>
#include <string>

class   WrongAnimal {
    protected:
        std::string type;

    public:
        // OCF - Orthodox Canonical Form
        WrongAnimal();                            // default constructor
        explicit WrongAnimal(const std::string &tp);

        WrongAnimal(const WrongAnimal &other);            // copy constructor
        WrongAnimal &operator=(const WrongAnimal &rhs);   // copy assignment
        ~WrongAnimal();                   // destructor

        // methods 
        void  makeSound() const;

        // getter for tests
        const std::string   &getType() const;
};

#endif // WRONGANIMAL_HPP
// end include guard