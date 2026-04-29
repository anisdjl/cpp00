/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 23:15:27 by anis              #+#    #+#             */
/*   Updated: 2026/04/29 14:20:00 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>

class Contact
{
	public:
		std::string	phone_number;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		void		init(void);
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
		Contact		contact[8];
		//static int	nb_contact;
		int			index = 0;
};

#endif