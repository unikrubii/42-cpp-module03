#include "FragTrap.hpp"

int main( void ) {
	FragTrap	ft1( "ft" );
	FragTrap	ft2( ft1 );
	std::cout << std::endl;

	ft1.attack( "ft2" );
	ft2.takeDamage( 20 );
	ft2.beRepaired( 15 );

	std::cout << std::endl;

	ft1.beRepaired( 10 );

	std::cout << std::endl;

	ft1.highFivesGuys();

	std::cout << std::endl;
	
	return 0;
}
