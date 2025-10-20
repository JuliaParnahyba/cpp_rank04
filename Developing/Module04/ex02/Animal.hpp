/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:32:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 11:55:20 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

/* --------- STANDARD LIBRARIES --------- */
#include <string>

class   Animal {
    protected:
        std::string type;

    public:
        // OCF - Orthodox Canonical Form
        Animal();                               // default constructor
        explicit Animal(const std::string &tp); // named/type constructor
        Animal(const Animal &other);            // copy constructor
        Animal &operator=(const Animal &rhs);   // copy assignment
        virtual ~Animal();                      // destructor

        // methods / behavior
        virtual void        makeSound() const = 0; // pure virtual

        // getter for tests
        const std::string   &getType() const;
};

#endif // ANIMAL_HPP
// end include guard