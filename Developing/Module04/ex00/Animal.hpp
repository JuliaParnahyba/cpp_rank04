/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:07:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:15:33 by jparnahy         ###   ########.fr       */
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

        // methods 
        virtual void        makeSound() const;

        // getter for tests
        const std::string   &getType() const;
};

#endif // ANIMAL_HPP
// end include guard