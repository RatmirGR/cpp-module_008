#include "Zombie.hpp"

int		main( void ) {

	Zombie *zombie1 = newZombie("Sam");
	zombie1->announce();
	randomChump("Tom");
	delete(zombie1);
	return 0;
}