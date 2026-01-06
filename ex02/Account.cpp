/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:18:25 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/06 17:47:52 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

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

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts 
        << ";total:" << _totalNbDeposits
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals;
}

Account::Account( int initial_deposit ) {
    std::cout << "created\n";
}

Account::~Account( void )
{
    std::cout << "closed\n";
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex 
        << ";amount:" << _amount
        << ";deposits:"<< _nbDeposits
        << ";withdrawals:" << _nbWithdrawals; 
}
