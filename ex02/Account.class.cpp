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

#include "Account.class.hpp"

Acount::Account(int initial_deposit){
	this->_amount = 0;
	for (int i = 0; i < amounts_size; i++){
		_amount += initial_deposit;
		std::cout << index:i;amount:initial_deposit;created << std::endl;
	}
	_nbAccounts++;
	_totalAmount += _amount;
	// _totalNbDeposits += _totalNbDeposits;
	// _totalNbWithdrawals += _totalNbWithdrawals;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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
	std::cout << "accounts:" << i << ";total:" << Account::getTotalAmount << ";deposits:" << Account::getNbDeposits << ";withdrawals:" << Account::getNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit){
	_totalNbDeposits += deposit;
}

bool Account::makeWithdrawal(int withdrawal){
	_totalNbWithdrawals += withdrawal;
}

int Account::checkAmount(void)const{
	
}

void Account::displayStatus(void)const{
	for (int i = 0; i < _nbAccounts; i++){
		std::cout << "index:" << i << ";total:" << Account::getTotalAmount << ";deposits:" << Account::getNbDeposits << ";withdrawals:" << Account::getNbWithdrawals << std::endl;
	}
}


