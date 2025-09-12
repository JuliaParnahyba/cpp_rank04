/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:41:49 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/11 22:02:34 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef FIXED_HPP    // start include guard: prevent multiple inclusion
#define FIXED_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>

class   Fixed {
    private:
        int _raw;
        static const int _fractionalBits;
    
    public:
        Fixed();                                // default constructor
        Fixed(const Fixed &other);              // copy constructor
        Fixed &operator=(const Fixed &other);   // copy assignment
        ~Fixed();                               // destructor

        // API
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif // FIXED_HPP
// end include guard

