/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:52:13 by adjelili          #+#    #+#             */
/*   Updated: 2026/04/30 18:16:12 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) 
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_totalAmount += initial_deposit; 
	std::cout << "index:" << Account::_nbAccounts 
	<< ";" << "amount:" << initial_deposit << ";" << "created\n";
	Account::_nbAccounts++;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed\n";
}

Account::Account(void)
{
	std::cout << "Constructor called\n";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
		_displayTimestamp();
		std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount
		<< ";" << "deposits:" << _totalNbDeposits << ";" << "withdrawals:"
		<< _totalNbWithdrawals << "\n";
}

void	Account::makeDeposit(int deposit)
{
	size_t	old_amount;
	old_amount = this->_amount;
	this->_nbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << old_amount << ";"
	<< "deposit:" << deposit << ";" << "amount:" << this->_amount << ";"
	<< "nb_deposits:" << this->_nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	size_t	old_amount;
	old_amount = this->_amount;
	if (withdrawal > checkAmount())
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << old_amount << ";"
		<< "withdrawal:refused" << "\n";
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << old_amount << ";"
	<< "withdrawal:" << withdrawal << ";" << "amount:" << this->_amount << ";"
	<< "nb_withdrawals:" << this->_nbWithdrawals << "\n";
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "deposits:" << this->_nbDeposits << ";"
	<< "withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::_displayTimestamp(void)
{
	char	final_time[20];

	time_t now = time(0);
	struct tm *local_time = localtime(&now);
	strftime(final_time, sizeof(final_time), "[%Y%m%d_%H%M%S] ", local_time);
	std::cout << final_time;
}
