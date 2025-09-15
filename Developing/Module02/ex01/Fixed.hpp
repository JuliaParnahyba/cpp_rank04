/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:53:08 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/14 21:53:44 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef FIXED_HPP    // start include guard: prevent multiple inclusion
#define FIXED_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>
#include <cmath>

class   Fixed {
    private:
        int _raw;
        static const int _fractionalBits;
    
    public:
        Fixed();                                // default constructor

        Fixed(const Fixed &other);              // copy constructor
        Fixed &operator=(const Fixed &other);   // copy assignment

        Fixed(const int nbr);                   // constructor from int
        Fixed(const float nbr);                 // constructor from float

        ~Fixed();                               // destructor

        int getRawBits(void) const;             // getter
        void setRawBits(int const raw);         // setter
        float toFloat(void) const;              // to float
        int toInt(void) const;                  // to int

        /* --------- FRIEND FUNCTION OFF CLASS --------- */
        friend std::ostream &operator<<(std::ostream &out, Fixed const &objt);
};

#endif // FIXED_HPP
// end include guard

