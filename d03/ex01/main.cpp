#include "ScavTrap.hpp"

int	main(void){
	ScavTrap player1("player1");
	ScavTrap player2("player2");
	player1.attack("player2");
	player2.attack("player1");
	player2.takeDamage(4);
	player1.beRepaired(2);
	player2.guardGate();
	return (0);
}