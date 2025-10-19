/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:27:52 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/18 23:36:58 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef CAT_HPP    // start include guard: prevent multiple inclusion
#define CAT_HPP    // define guard macro once for this translation unit

/* --------- PROJECT HEADERS --------- */
#include "Animal.hpp"   // Animal class for base class
#include "Brain.hpp"    // Brain class for base class        

class   Cat : public Animal {
    private:
        Brain *brain;

    public:
        // OCF - Orthodox Canonical Form
        Cat();                            // default constructor
        Cat(const Cat &other);            // copy constructor
        Cat &operator=(const Cat &rhs);   // copy assignment
        virtual ~Cat();                   // destructor

        // methods 
        virtual void  makeSound() const;

        // utils for tests
        void                setIdea(int i, const std::string &idea);
        const std::string   &getIdea(int i) const;
};

#endif // CAT_HPP
// end include guard