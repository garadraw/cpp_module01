/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nartex <nartex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:45:59 by nartex            #+#    #+#             */
/*   Updated: 2022/11/03 14:46:00 by nartex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "harl.hpp"

int		main()
{
	Harl Harl;


	Harl.complain("ERROR");
	Harl.complain("WARNING");
	Harl.complain("DEBUG");
	Harl.complain("INFO");
}