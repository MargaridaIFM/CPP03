/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 23:26:00 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/02 23:38:21 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap vilan1("Ursula");
    ClapTrap vilan2("Cruela");

    vilan1.attack("Cruela");
    vilan2.takeDamage(5);

    vilan2.beRepaired(2);
    vilan2.attack("Ursula");
    vilan1.takeDamage(8);
    
    vilan1.beRepaired(2);

    vilan2.attack("Ursula");
    vilan1.takeDamage(5);

    vilan1.beRepaired(2);

    std::cout << "Cruela wins!" << std::endl;
    
}