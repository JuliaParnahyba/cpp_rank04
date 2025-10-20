/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:29:52 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 11:12:38 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef BRAIN_HPP
#define BRAIN_HPP

/* --------- STANDARD LIBRARIES --------- */
#include <string>

class   Brain {
    private:
        std::string ideas[100];

    public:
        // OCF - Orthodox Canonical Form
        Brain();                            // default constructor
        Brain(const Brain &other);          // copy constructor
        Brain &operator=(const Brain &rhs); // copy assignment
        ~Brain();                           // destructor

        // utils for tests
        void                setIdea(int i, const std::string &idea);
        const std::string   &getIdea(int i) const;
};

#endif // BRAIN_HPP
// end include guard
