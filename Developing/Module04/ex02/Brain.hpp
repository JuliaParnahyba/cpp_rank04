/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:32:49 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/19 19:32:50 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef BRAIN_HPP    // start include guard: prevent multiple inclusion
#define BRAIN_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>
#include <string>

class   Brain {
    private:
        std::string ideas[100];

    public:
        // OCF - Orthodox Canonical Form
        Brain();                              // default constructor
        Brain(const Brain &other);            // copy constructor
        Brain &operator=(const Brain &rhs);   // copy assignment
        ~Brain();                     // destructor

        // utils for tests
        void                setIdea(int i, const std::string &idea);
        const std::string   &getIdea(int i) const;
};

#endif // BRAIN_HPP
// end include guard
