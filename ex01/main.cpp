#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap	sc1( "sc1" );
	ScavTrap	sc2( "sc2" );
	std::cout << std::endl;

	sc1.attack( "sc2" );
	sc2.takeDamage( 3 );
	sc2.beRepaired( 5 );

	std::cout << std::endl;

	sc1.guardGate();
	
	return 0;
}
