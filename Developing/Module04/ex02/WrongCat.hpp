/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:33:50 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/19 19:33:51 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef WRONGCAT_HPP    // start include guard: prevent multiple inclusion
#define WRONGCAT_HPP    // define guard macro once for this translation unit

/* --------- PROJECT HEADERS --------- */
#include "WrongAnimal.hpp"      // WrongAnimal class for base class to inherit

class   WrongCat : public WrongAnimal {
    public:
        // OCF - Orthodox Canonical Form
        WrongCat();                            // default constructor
        explicit WrongCat(const std::string &tp);

        WrongCat(const WrongCat &other);            // copy constructor
        WrongCat &operator=(const WrongCat &rhs);   // copy assignment
        ~WrongCat();                   // destructor

        // methods 
        void  makeSound() const;
};

#endif // WrongCat_HPP
// end include guard