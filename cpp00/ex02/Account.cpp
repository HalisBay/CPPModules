/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:37:03 by hbay              #+#    #+#             */
/*   Updated: 2024/04/30 10:37:03 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

Account::Account( void ) : _accountIndex(_nbAccounts++), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
                "total:" << getTotalAmount() << ";"
                "deposits:" << getNbDeposits() << ";"
                "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                "amount:" << _amount << ";created" << std::endl;        
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                "amount:" << _amount << ";closed" << std::endl;  
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                "p_amount:" << _amount << ";"
                "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "amount:" << _amount << ";"
                "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                "p_amount:" << _amount << ";";
    if (_amount - withdrawal >= 0) {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";"
                    "amount:" << _amount << ";"
                    "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    } else {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                "amount:" << _amount << ";"
                "deposits:" << _nbDeposits << ";"
                "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t currentTime = std::time(NULL);
    std::tm* timeInfo = std::localtime(&currentTime);

    char buffer[80];
    std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeInfo);
    
    std::cout << buffer;
}
