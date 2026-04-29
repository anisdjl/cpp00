/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:51:33 by adjelili          #+#    #+#             */
/*   Updated: 2026/04/29 13:13:31 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::init(void)
{
	std::string	tmp;

	while (this->first_name.empty())
	{
		std::cout << "Enter the first name\n";
		std::getline(std::cin, tmp);
		this->first_name.append(tmp);
	}
	while (this->last_name.empty())
	{
		std::cout << "Enter the last name\n";
		std::getline(std::cin, tmp);
		this->last_name.append(tmp);
	}
	while (this->nickname.empty())
	{
		std::cout << "Enter the nickname\n";
		std::getline(std::cin, tmp);
		this->nickname.append(tmp);
	}
	while (this->darkest_secret.empty())
	{
		std::cout << "Enter the darkest secret\n";
		std::getline(std::cin, tmp);
		this->darkest_secret.append(tmp);
	}
	while (this->phone_number.empty())
	{
		std::cout << "Enter the phone number\n";
		std::getline(std::cin, tmp);
		this->phone_number.append(tmp);
	}
}
