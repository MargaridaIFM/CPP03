/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 00:01:17 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/03 14:32:42 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(): ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
  std::cout << "ScavTrap Default Constructer Called." << std::endl;  
}

ScavTrap:: ScavTrap(const std:: string _name): ClapTrap(_name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap "<< name << " Default Parameter Constructer Called." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap:: ~ScavTrap()
{
    std::cout << "ScavTrap " << name << " Destruter Called." << std::endl;   
}

void ScavTrap:: attack(const std::string& target)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << " causing "  << attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "Scavtrap " << name << " don't have enough hit points or energy to attack!" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}