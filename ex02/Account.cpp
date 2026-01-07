/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:18:25 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/07 12:14:31 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructor/Destructor

Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<< ";amount:" << _amount 
		<< ";created\n";
}

Account::~Account( void )
{
	Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex 
	<< ";amount:" << _amount << ";closed\n";
	_nbAccounts--;
}

// Getter

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

// Display

void	Account::_displayTimestamp( void )
{
	std::time_t	now;
	std::tm		*ltime;

	now = std::time(NULL);
	ltime = std::localtime(&now);
	std::cout << '['
		<< 1900 + ltime->tm_year
		<< std::setw(2) << std::setfill('0') << 1 + ltime->tm_mon
		<< std::setw(2) << std::setfill('0') << ltime->tm_mday
		<< '_'
		<< std::setw(2) << std::setfill('0') << ltime->tm_hour
		<< std::setw(2) << std::setfill('0') << ltime->tm_min
		<< std::setw(2) << std::setfill('0') << ltime->tm_sec
		<< "] ";
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
        << ";total:" << _totalAmount
        << ";deposits:" << _totalNbDeposits
        << ";withdrawals:" << _totalNbWithdrawals << '\n';
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<< ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits 
		<< ";withdrawals:" << _nbWithdrawals << '\n';
}

// Account_Manager

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << '\n';
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	if ((withdrawal > 0) && (withdrawal <= checkAmount()))
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << '\n';
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:refused\n";
		return (false);
	}
}
