/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:07:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:22:40 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef CAT_HPP
#define CAT_HPP

/* --------- PROJECT HEADERS --------- */
#include "Animal.hpp"      // Animal class for base class to inherit

class   Cat : public Animal {
    public:
        // OCF - Orthodox Canonical Form
        Cat();                            // default constructor
        Cat(const Cat &other);            // copy constructor
        Cat &operator=(const Cat &rhs);   // copy assignment
        virtual ~Cat();                   // destructor

        // methods/behavior
        virtual void  makeSound() const;
};

#endif // CAT_HPP
// end include guard