/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:51:33 by adjelili          #+#    #+#             */
/*   Updated: 2026/04/30 10:56:44 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::init(void)
{
	std::string	tmp;

	this->_first_name.clear();
	while (this->_first_name.empty())
	{
		std::cout << "Enter the first name\n";
		std::getline(std::cin, tmp);
		this->_first_name.append(tmp);
	}
	this->_last_name.clear();
	while (this->_last_name.empty())
	{
		std::cout << "Enter the last name\n";
		std::getline(std::cin, tmp);
		this->_last_name.append(tmp);
	}
	this->_nickname.clear();
	while (this->_nickname.empty())
	{
		std::cout << "Enter the nickname\n";
		std::getline(std::cin, tmp);
		this->_nickname.append(tmp);
	}
	this->_darkest_secret.clear();
	while (this->_darkest_secret.empty())
	{
		std::cout << "Enter the darkest secret\n";
		std::getline(std::cin, tmp);
		this->_darkest_secret.append(tmp);
	}
	this->_phone_number.clear();
	while (this->_phone_number.empty())
	{
		std::cout << "Enter the phone number\n";
		std::getline(std::cin, tmp);
		this->_phone_number.append(tmp);
	}
}

std::string	Contact::display_fname(void)
{
	std::string	tmp;

	if (this->_first_name.length() > 10)
	{
		tmp = this->_first_name.substr(0, 9);
		tmp += '.';
		return (tmp);
	}
	return (this->_first_name);
}

std::string	Contact::display_lname(void)
{
	std::string	tmp;

	if (this->_last_name.length() > 10)
	{
		tmp = this->_last_name.substr(0, 9);
		tmp += '.';
		return (tmp);
	}
	return (this->_last_name);
}

std::string	Contact::display_nname(void)
{
	std::string	tmp;

	if (this->_first_name.length() > 10)
	{
		tmp = this->_nickname.substr(0, 9);
		tmp += '.';
		return (tmp);
	}
	return (this->_nickname);
}

std::string	Contact::getName(void) const
{
	return (this->_first_name);
}

std::string	Contact::getLname(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getSecret(void) const
{
	return (this->_darkest_secret);
}

std::string	Contact::getPhonenum(void) const
{
	return (this->_phone_number);
}

bool	Contact::is_empty(void)
{
	if (this->_first_name.empty())
		return (true);
	return (false);
}