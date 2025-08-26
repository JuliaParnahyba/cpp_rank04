/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedApp.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:49:11 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/25 22:25:21 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef SEDAPP_HPP
#define SEDAPP_HPP

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // std::string
#include <iostream> // std::cout and std::endl

/* --------- PROJECT HEADERS --------- */
#include "SedReplacer.hpp"      // Contact class

/* --------- FUNCTION PROTOTYPES --------- */
/* ------ AUX. FUNCTIONS ------ */
void        print_usage(const char *prog);
std::string empty_checker(const std::string &in, const std::string &s1);

#endif  // SEDAPP_HPP
// end include guard