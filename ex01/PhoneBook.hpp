/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 23:15:27 by anis              #+#    #+#             */
/*   Updated: 2026/05/21 12:25:54 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <cstdio>

class Contact
{
	private:
		std::string	_phone_number;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_darkest_secret;
	public:
		void		init(void);
		std::string	display_fname(void);
		std::string	display_lname(void);
		std::string	display_nname(void);
		std::string	getName(void) const;
		std::string	getLname(void) const;
		std::string	getNickname(void) const;
		std::string	getSecret(void) const;
		std::string	getPhonenum(void) const;
		bool		is_empty(void);
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		void	display();
	private:
		Contact		_contact[8];
		int			_index;
};

std::string	my_getline(void);

#endif