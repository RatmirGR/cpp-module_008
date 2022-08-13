#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap	Diamond("Player1");

	Diamond.attack("Player2");
	Diamond.attack("Player3");
	Diamond.attack("Player4");
	Diamond.beRepaired(5);
	Diamond.takeDamage(70);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();

	return (0);
}