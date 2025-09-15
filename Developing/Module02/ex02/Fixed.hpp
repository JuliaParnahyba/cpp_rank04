/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:46:58 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/15 11:56:10 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef FIXED_HPP    // start include guard: prevent multiple inclusion
#define FIXED_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream> // std::cout 
#include <cmath>    // roundf

/* --------- CLASS --------- */
class   Fixed {
    private:
        int _raw;
        static const int _fractionalBits;
    
    public:
        Fixed();                                // default constructor

        Fixed(const Fixed &other);              // copy constructor
        Fixed &operator=(const Fixed &other);   // copy assignment
        
        Fixed(const int nbr);                   // int constructor
        Fixed(const float nbr);                 // float constrictor

        ~Fixed();                               // destructor
        
        int     getRawBits(void) const;         // getter
        void    setRawBits(void);               // setter
        float   toFloat(void) const;            // convert to float
        int     toInt(void) const;              // convert to int
        
        /* --------- FRIEND FUNCTION OFF CLASS --------- */
        // overload operator for cout the objetc. Will call toInt()
        friend std::ostream &operator<<(std::ostream &out, Fixed const &objt);
}

#endif // FIXED_HPP
// end include guard