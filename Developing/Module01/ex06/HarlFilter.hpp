/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:41:09 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/09 21:56:45 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef HARL_HPP  // start include guard: prevent multiple inclusion
#define HARL_HPP  // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // std::string
#include <iostream> // std::cout and std::endl
#include <cctype>

/* --------- CLASS --------- */
class   HarlFilter {
    private:
        void    degub(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public:
        void    complain(std::string level);
        
};

#endif  // HARL_HPP
// end include guard