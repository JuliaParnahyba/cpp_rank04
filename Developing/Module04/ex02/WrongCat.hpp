/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:33:50 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 12:03:34 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

/* --------- PROJECT HEADERS --------- */
#include "WrongAnimal.hpp"      // WrongAnimal class for base class to inherit

class   WrongCat : public WrongAnimal {
    public:
        // OCF - Orthodox Canonical Form
        WrongCat();                                 // default constructor
        WrongCat(const WrongCat &other);            // copy constructor
        WrongCat &operator=(const WrongCat &rhs);   // copy assignment
        ~WrongCat();                                // destructor

        // methods (non-virtual)
        void  makeSound() const;
};

#endif // WrongCat_HPP
// end include guard