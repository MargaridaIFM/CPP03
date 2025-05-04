/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 23:26:00 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/03 18:04:18 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main() {
    DiamondTrap dt("Dia_0");
    std::cout << "\n";

    dt.attack("Bla_112");
    dt.takeDamage(20);
    dt.beRepaired(10);
    dt.highFivesGuys();
    dt.guardGate();
    dt.whoAmI();
    std::cout << "\n";

    ClapTrap clap("Clap_1");
    FragTrap frag("Frag_2");
    ScavTrap scav("Scav_3");
    std::cout << "\n";

    dt.attack("Bla_222");
    clap.attack("Bla_333");
    frag.attack("Bla_444");
    scav.attack("Bla_555");
    std::cout << "\n";

    return 0;
}