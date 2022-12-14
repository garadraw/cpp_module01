/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:21:50 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/14 17:27:34 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

/* The Constructior is already Defined and Declared in the Header File */
// Zombie::Zombie(void)
// {
// 	// So the Compiler Does Not Complain
// }

Zombie::~Zombie(void)
{
	// So the Compiler Does Not Complain
}

void	Zombie::announce(void)
{
	// newZombie(this->name);
	std::cout << " Zombie " << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
