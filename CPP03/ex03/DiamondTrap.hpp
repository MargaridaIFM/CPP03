/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:18:44 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/03 18:05:46 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std:: string name;
    
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        //DiamondTrap(const DiamondTrap &other);
        //DiamondTrap &operator=(const DiamondTrap &other);
        ~DiamondTrap();

        
        void attack(const std:: string& target);
        void whoAmI();
};

#endif
