#include "DiamondTrap.hpp"

int main( void ) {
	DiamondTrap	dt( "Armel" );
	std::cout << std::endl;

	dt.showHp();
	dt.showEnergy();
	dt.showAtk();
	std::cout << std::endl;

	dt.attack( "Vlad" );

	std::cout << std::endl;

	dt.whoAmI();

	std::cout << std::endl;
	
	return 0;
}
