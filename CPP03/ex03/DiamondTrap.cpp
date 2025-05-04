/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:20:47 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/03 18:04:44 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap()
{
    name = ClapTrap::name + "_clap_name";
    hitPoints = FragTrap::hitPoints;
    energyPoints = 50;
    attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap (), name(name)
{
    hitPoints = FragTrap::hitPoints;
    energyPoints = 50;
    attackDamage = FragTrap::attackDamage;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamonTrap " << name << " Destructer Called." << std::endl;
}

void DiamondTrap::attack(const std:: string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << name << ", ClapTrap name is " << ClapTrap::name << "." << std::endl;
}