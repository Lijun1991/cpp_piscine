/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:33:58 by lwang             #+#    #+#             */
/*   Updated: 2017/07/04 16:34:02 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.class.hpp"

Account::Account(int initial_deposit){
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << getNbAccounts() << ";amount:" << \
	initial_deposit << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:" << getNbAccounts() - 1 << ";amount:" << \
	checkAmount() << ";closed" << std::endl;
	_nbAccounts--;
}


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::count_for_bonus = 0;

int Account::getNbAccounts(void){
	return (_nbAccounts);
}

int Account::getTotalAmount(void){
	return (_totalAmount);
}

int Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << getTotalAmount() \
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" \
	<< getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit){
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" \
	<< this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount -= withdrawal;
	if (this->_amount < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		this->_amount += withdrawal;
		return false;
	}
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount(void)const{
	count_for_bonus++;
	return (this->_amount);
}

void Account::displayStatus(void)const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< checkAmount() << ";deposits:" << this->_nbDeposits\
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void){
	time_t now = time(0);
	char* dt = ctime(&now);
	std::cout << "[" << dt << "]";
}
