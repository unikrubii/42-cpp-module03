#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap cp1;
	ClapTrap cp2("cp2");

	cp1.attack("cp2");
	std::cout << std::endl;

	cp2.takeDamage(5);
	cp2.beRepaired(10);
	cp2.beRepaired(3);
	std::cout << std::endl;

	cp2.takeDamage(20);
	cp2.beRepaired(3);

	return 0;
}
