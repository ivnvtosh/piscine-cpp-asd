/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:34:07 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/24 14:46:46 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();

	std::cout << "accounts:"    << Account::_nbAccounts         << ";";
	std::cout << "total:"       << Account::_totalAmount        << ";";
	std::cout << "deposits:"    << Account::_totalNbDeposits    << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) {
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += initial_deposit;

	this->_nbAccounts += 1;

	Account::_displayTimestamp();

	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit     << ";";
	std::cout << "created"                        << std::endl;
}

Account::~Account( void ) {
	Account::_displayTimestamp();

	this->_nbAccounts -= 1;

	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount       << ";";
	std::cout << "closed"                         << std::endl;
}

void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();

	std::cout << "index:"    << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount       << ";";
	std::cout << "deposit:"  << deposit             << ";";

	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;

	std::cout << "amount:"      << this->_amount     << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();

	std::cout << "index:"    << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount       << ";";

	if (this->_amount < withdrawal) {
		std::cout <<"withdrawal:refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;

	std::cout << "withdrawal:"     << withdrawal           << ";";
	std::cout << "amount:"         << this->_amount        << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return true;
}

int Account::checkAmount( void ) const {
	return this->_amount;
}

void Account::displayStatus( void ) const {
	Account::_displayTimestamp();

	std::cout << "index:"       << this->_accountIndex  << ";";
	std::cout << "amount:"      << this->_amount        << ";";
	std::cout << "deposits:"    << this->_nbDeposits    << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void ) {
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout << "[" << (utc_tm.tm_year + 1900)
			  << utc_tm.tm_mon
			  << utc_tm.tm_mday << "_"
			  << utc_tm.tm_hour
			  << utc_tm.tm_min
			  << utc_tm.tm_sec << "] ";
}

Account::Account( void ) {
	this->_accountIndex = this->_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_nbAccounts += 1;

	Account::_displayTimestamp();

	std::cout << "index:"  << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}
