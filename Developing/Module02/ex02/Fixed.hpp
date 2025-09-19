/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:46:58 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/18 21:52:00 by jparnahy         ###   ########.fr       */
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
        Fixed(const float nbr);                 // float constructor

        ~Fixed();                               // destructor
        
        int     getRawBits(void) const;         // getter
        void    setRawBits(int const raw);      // setter
        float   toFloat(void) const;            // convert to float
        int     toInt(void) const;              // convert to int
        

        /* --------- COMPARISON OPERATORS --------- */
        bool    operator>(Fixed const &rhs) const;
        bool    operator<(Fixed const &rhs) const;
        bool    operator>=(Fixed const &rhs) const;
        bool    operator<=(Fixed const &rhs) const;
        bool    operator==(Fixed const &rhs) const;
        bool    operator!=(Fixed const &rhs) const;

        /* --------- ARITHMETIC OPERATORS --------- */
        Fixed   operator+(Fixed const &rhs) const;
        Fixed   operator-(Fixed const &rhs) const;
        Fixed   operator*(Fixed const &rhs) const;
        Fixed   operator/(Fixed const &rhs) const;

        /* --------- INCREMENT/DECREMENT OPERATORS --------- */
        Fixed   &operator++(void);  // prefix increment: ++a
        Fixed   &operator--(void);  // prefix decrement --a
        Fixed   operator++(int);    // postfix increment: a++
        Fixed   operator--(int);    // postfix decrement: a--

        /* --------- MIN/MAX (STATIC OVERLOADS) --------- */
        static Fixed        &min(Fixed &lhs, Fixed &rhs);
        static Fixed const  &min(Fixed const &lhs, Fixed const &rhs);
        static Fixed        &max(Fixed &lhs, Fixed &rhs);
        static Fixed const  &max(Fixed const &lhs, Fixed const &rhs);
};

/* --------- FRIEND FUNCTION OFF CLASS --------- */
// stream operator to cout the objetc. Will call toFloat()
std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif // FIXED_HPP
// end include guard