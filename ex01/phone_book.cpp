/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anis <anis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 23:15:24 by anis              #+#    #+#             */
/*   Updated: 2026/04/29 22:15:25 by anis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
		std::cout << std::setw(10) << std::right << i << "|" 
		<< std::setw(10) << std::right << this->contact[i].display_format(this->contact[i].first_name) << "|"
		<< std::setw(10) << std::right << this->contact[i].display_format(this->contact[i].last_name) << "|"
		<< std::setw(10) << std::right << this->contact[i].display_format(this->contact[i].nickname) << "\n";
	}
}

void	PhoneBook::search(void)
{
	std::string	tmp;
	int			index = 0;

	this->display();
	std::cout << "Enter the index of the contact you want to display\n";
	std::getline(std::cin, tmp);
	if (tmp.length() == 1 && (tmp[0] >= '0' && tmp[0] <= '7'))
		index = tmp[0] - '0';
	else
	{
		std::cout << "Wrong input try with a right value\n";
		this->search();
	}
	if (index <= this->index)
	{
		std::cout << "First name: " << this->contact[index].first_name
		<< "\n" << "Last name: " << this->contact[index].last_name
		<< "\n" << "Nickname: " << this->contact[index].nickname
		<< "\n" << "Phone number: " << this->contact[index].phone_number << "\n";
	}
	else
	{
		std::cout << "No contact at this index, try again\n";
		this->search();
	}
	return ;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string		input;

	while (1)
	{
		std::cout << "Enter an option : ADD | SEARCH | EXIT\n";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.add();			
		else if (!input.compare("SEARCH"))
			phonebook.search();
		else if (!input.compare("EXIT"))
		{
			std::cout << "Exiting the phone book...\n";
			return (0);
		}
	}
	return (0);	
}