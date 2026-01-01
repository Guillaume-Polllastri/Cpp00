/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:23:25 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/01 17:48:24 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

static void	megaphone(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
		for (int j = 0; av[i][j]; j++)
			std::cout << (char)std::toupper(av[i][j]);
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	else
		megaphone(ac, av);
	return (0);
}