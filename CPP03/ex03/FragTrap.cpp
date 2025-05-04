/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:37:03 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/03 15:41:07 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap:: FragTrap(): ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
  std::cout << "FragTrap Default Constructer Called." << std::endl;  
}

FragTrap:: FragTrap(const std:: string _name): ClapTrap(_name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "FragTrap "<< name << " Default Parameter Constructer Called." << std::endl;
}
FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    return *this;
}

FragTrap:: ~FragTrap()
{
    std::cout << "FragTrap " << name << " Destruter Called." << std::endl;   
}

void FragTrap:: attack(const std::string& target)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << " causing "  << attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "FragTrap " << name << " don't have enough hit points or energy to attack!" << std::endl;
}
void FragTrap:: highFivesGuys()
{
    std::cout << "FragTrap " << name << " requested HI FIVE!" << std::endl;
}