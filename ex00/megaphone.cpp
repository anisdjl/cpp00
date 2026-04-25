/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anis <anis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:07:19 by anis              #+#    #+#             */
/*   Updated: 2026/04/25 22:58:24 by anis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	int	a;
	int	y;

	a = 1;
	(void)argc;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[a])
	{
		y = 0;
		while (argv[a][y])
		{
			if (std::isalpha(argv[a][y]))
				std::cout << (char)std::toupper(argv[a][y]);
			else
				std::cout << argv[a][y];
			y++;
		}
		a++;
	}
	std::cout << std::endl;
	return (0);
}
