#include "FragTrap.hpp"

int	main(void){
	FragTrap player1("player1");
	player1.attack("player2");
	player1.takeDamage(4);
	player1.beRepaired(2);
	player1.highFivesGuys();

	return (0);
}