#include "ClapTrap.hpp"

int	main(void){
	ClapTrap p0;
	ClapTrap p1("player1");
	ClapTrap p2("player2");
	p1.attack("player2");
	p2.takeDamage(2);
	p2.beRepaired(1);
	p1.beRepaired(3);

	return (0);
}