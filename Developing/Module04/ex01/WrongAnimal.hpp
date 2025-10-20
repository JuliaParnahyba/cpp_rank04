/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:28:38 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:57:47 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

/* --------- STANDARD LIBRARIES --------- */
#include <string>

class   WrongAnimal {
    protected:
        std::string type;

    public:
        // OCF - Orthodox Canonical Form
        WrongAnimal();                                  // default constructor
        explicit WrongAnimal(const std::string &tp);    // type constructor
        WrongAnimal(const WrongAnimal &other);          // copy constructor
        WrongAnimal &operator=(const WrongAnimal &rhs); // copy assignment
        ~WrongAnimal();                                 // destructor (non-virtual)

        // methods 
        void  makeSound() const;

        // getter for tests
        const std::string   &getType() const;
};

#endif // WRONGANIMAL_HPP
// end include guard