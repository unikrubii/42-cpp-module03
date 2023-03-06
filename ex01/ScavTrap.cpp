#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap( name, false ) {
	std::cout << CYN << "ScavTrap " << name << " has entered" << RES << std::endl;
}

ScavTrap::ScavTrap( std::string name, int hp, int energy, int atk ): ClapTrap( name, hp, energy, atk, false ) {
	std::cout << CYN << "ScavTrap " << name << " has entered" << RES << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &src ): ClapTrap( src ) {
}

ScavTrap::~ScavTrap( void ) {
	std::cout << RED << "ScavTrap " << this->_name << " left" << RES << std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &src ) {
	if (this != &src) {
		this->_name = src._name;
		this->_hp = src._hp;
		this->_energy = src._energy;
		this->_atk = src._atk;
	}
	return *this;
}

void ScavTrap::guardGate( void ) {
	std::cout << CYN << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << RES << std::endl;
}

void ScavTrap::attack( const std::string &target ) {
	std::cout << MAG << "ScavTrap " << this->_name << " attacks " << target << " causing " << YEL << this->_atk << MAG << " points of damage!" << RES << std::endl;
}
