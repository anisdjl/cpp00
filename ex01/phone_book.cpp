/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 23:15:24 by anis              #+#    #+#             */
/*   Updated: 2026/04/28 15:52:32 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string		input;

	while (1)
	{
		std::cout << "Enter an option : ADD | SEARCH | EXIT\n";
		std::cin >> input;
		std::cout << input << std::endl;
		if (input.compare("ADD"))
		{
			
		}
	}
	return (0);	
}