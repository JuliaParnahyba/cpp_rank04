/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:44:56 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/09 21:16:00 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl *harl = new Harl;

    harl->complain("DEBUG");
    harl->complain("INFOR");
    harl->complain("WARNING");
    harl->complain("ERROR");

    harl->complain("RANDOM");

    delete harl;

    return 0;
}