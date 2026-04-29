/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 23:15:24 by anis              #+#    #+#             */
/*   Updated: 2026/04/29 14:52:57 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//int	PhoneBook::nb_contact = 0;

PhoneBook::PhoneBook()
{
	std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	PhoneBook::add(void)
{
	if (this->index > 7)
		this->index = 0;
	this->contact[this->index].init();
	this->index++;
}

void	PhoneBook::display(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << i;
		
	}
}

// void	PhoneBook::search(void)
// {
		
// }

int	main(void)
{
	PhoneBook	phonebook;
	std::string		input;

	while (1)
	{
		std::cout << "Enter an option : ADD | SEARCH | EXIT\n";
		std::getline(std::cin, input);
		//std::cout << input << std::endl;
		if (!input.compare("ADD"))
			phonebook.add();			
		else if (!input.compare("SEARCH"))
		{
			std::cout << "im in the search bar\n";
			return (0);
		}
		else if (!input.compare("EXIT"))
		{
			std::cout << "im in exit, ciao\n";
			return (0);
		}
	}
	return (0);	
}