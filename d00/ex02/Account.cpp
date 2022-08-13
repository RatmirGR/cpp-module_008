#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp()
{
	time_t		current_time;
	struct tm	s_local_time;
	char		buf_time[32];

	current_time = time(0);
	s_local_time = *localtime(&current_time);
	strftime(buf_time, sizeof(buf_time), "[%Y%m%d_%H%M%S] ", &s_local_time);
	std::cout << buf_time;
}

Account::Account(int init_deposit)
{
	_amount = 0;
	_accountIndex = _nbAccounts++;
	_amount += init_deposit;
	this->_totalAmount += init_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	--_nbAccounts;
	_totalAmount -= _amount;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "deposits:" << Account::_nbDeposits << ";";
	std::cout << "withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "deposit:";
	if (deposit < 0)
	{
		std::cout << "refused" << std::endl;
		return ;
	}
	std::cout << deposit << ";";
	Account::_amount += deposit;
	Account::_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->checkAmount() || withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";";
	Account::_amount -= withdrawal;
	Account::_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "nb_withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;

	return true;
}



