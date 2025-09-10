/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedReplacer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:42:09 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/25 22:24:30 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef SEDREPLACER_HPP  // start include guard: prevent multiple inclusion
#define SEDREPLACER_HPP  // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // std::string
#include <fstream>  // std::ifstream and std::ofstream
#include <iostream> // std::cout, std::endl and std::cerr

/* --------- CLASS --------- */
class   SedReplacer {
    private:
        //State
        std::string _input;
        std::string _s1;
        std::string _s2;

        std::string replaceAll(const std::string &src, const std::string &from, const std::string &to);

        bool openInput(std::ifstream &file_in) const;
        bool openOutput(std::ofstream &file_out, std::string &outname) const;
        
    public:
        SedReplacer(const std::string &input, const std::string &s1, const std::string &s2);
        bool run();
        
};

#endif  // SEDREPLACER_HPP
// end include guard