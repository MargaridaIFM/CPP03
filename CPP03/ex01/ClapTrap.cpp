/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:39:43 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/03 14:32:42 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap:: ClapTrap(): name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
  std::cout << "ClapTrap Default Constructer Called." << std::endl;  
}

ClapTrap:: ClapTrap(const std::string _name): name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap "<< name << " Default Parameter Constructer Called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this= other;
    std::cout << "ClapTrap Copy Constructer called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

ClapTrap:: ~ClapTrap()
{
  std::cout << "ClapTrap " << name << " Destruter Called." << std::endl;  
    
}

void ClapTrap:: attack(const std::string& target)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing "  << attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "Claptrap " << name << " don't have enough hit points or energy to attack!" << std::endl;
}
void ClapTrap:: takeDamage(unsigned int amount)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints--;
        this->hitPoints -= amount;
        std::cout << "ClapTrap " << this-> name << " takes " << amount << " points of damage!\n";
    }
    else
        std::cout << "Claptrap " << name << " don't have enough hit points or energy!" << std::endl;   
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints--;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << name << " is be repared receving " << amount << " energy points!" << std::endl; 
    }
    else
        std::cout << "Claptrap" << name << "don't have enough hit points or energy!" << std::endl;   
}