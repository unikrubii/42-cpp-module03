#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap	sc1( "sc1" );
	ScavTrap	sc2( sc1 );
	ScavTrap	sc3( void );
	std::cout << std::endl;

	sc1.attack( "sc2" );
	sc2.takeDamage( 20 );
	sc2.beRepaired( 15 );

	std::cout << std::endl;

	sc1.beRepaired( 10 );

	std::cout << std::endl;

	sc1.guardGate();
	
	std::cout << std::endl;
	
	return 0;
}
