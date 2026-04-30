/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:51:33 by adjelili          #+#    #+#             */
/*   Updated: 2026/04/30 10:41:30 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::init(void)
{
	std::string	tmp;

	this->first_name.clear();
	while (this->first_name.empty())
	{
		std::cout << "Enter the first name\n";
		std::getline(std::cin, tmp);
		this->first_name.append(tmp);
	}
	this->last_name.clear();
	while (this->last_name.empty())
	{
		std::cout << "Enter the last name\n";
		std::getline(std::cin, tmp);
		this->last_name.append(tmp);
	}
	this->nickname.clear();
	while (this->nickname.empty())
	{
		std::cout << "Enter the nickname\n";
		std::getline(std::cin, tmp);
		this->nickname.append(tmp);
	}
	this->darkest_secret.clear();
	while (this->darkest_secret.empty())
	{
		std::cout << "Enter the darkest secret\n";
		std::getline(std::cin, tmp);
		this->darkest_secret.append(tmp);
	}
	this->phone_number.clear();
	while (this->phone_number.empty())
	{
		std::cout << "Enter the phone number\n";
		std::getline(std::cin, tmp);
		this->phone_number.append(tmp);
	}
}

std::string	Contact::display_fname(void)
{
	std::string	tmp;

	if (this->first_name.length() > 10)
	{
		tmp = this->first_name.substr(0, 9);
		tmp += '.';
		return (tmp);
	}
	return (this->first_name);
}

std::string	Contact::display_lname(void)
{
	std::string	tmp;

	if (this->last_name.length() > 10)
	{
		tmp = this->last_name.substr(0, 9);
		tmp += '.';
		return (tmp);
	}
	return (this->last_name);
}

std::string	Contact::display_nname(void)
{
	std::string	tmp;

	if (this->first_name.length() > 10)
	{
		tmp = this->nickname.substr(0, 9);
		tmp += '.';
		return (tmp);
	}
	return (this->nickname);
}

std::string	Contact::getName(void) const
{
	return (this->first_name);
}

std::string	Contact::getLname(void) const
{
	return (this->last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string	Contact::getSecret(void) const
{
	return (this->darkest_secret);
}

std::string	Contact::getPhonenum(void) const
{
	return (this->phone_number);
}

bool	Contact::is_empty(void)
{
	if (this->first_name.empty())
		return (true);
	return (false);
}