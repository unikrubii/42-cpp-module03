#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): FragTrap(), ScavTrap() {
	this->_name = "Unnamed_clap_name";
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_atk = FragTrap::_atk;
	
	std::cout << GRN << "DiamondTrap Unnamed ready to roll!" << RES << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap( name, 100, 50, 30 ), FragTrap( name ), ScavTrap( name ) {
	this->_name = name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_atk = FragTrap::_atk;

	std::cout << GRN << "DiamondTrap " << this->_name << " ready to roll!" << RES << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ): FragTrap( src ), ScavTrap( src ) {
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << RED << "DiamondTrap " << this->_name << " is snapped" << RES << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &src ) {
	if (this != &src) {
		this->_name = src._name;
	}
	return *this;
}

void DiamondTrap::whoAmI( void ) const {
	std::cout << GRN << "DiamondTrap " << this->_name << " is actually " << this->FragTrap::_name << " from FragTrap" << RES << std::endl;
}

void DiamondTrap::attack( const std::string &target ) {
	this->ScavTrap::attack( target );
}

void	DiamondTrap::showHp( void ) {
	std::cout << MAG << "DiamondTrap " << this->_name << " has " << YEL << this->_hp << MAG << " hp" << RES << std::endl;
}

void	DiamondTrap::showEnergy( void ) {
	std::cout << MAG << "DiamondTrap " << this->_name << " has " << YEL << this->_energy << MAG << " energy" << RES << std::endl;
}

void	DiamondTrap::showAtk( void ) {
	std::cout << MAG << "DiamondTrap " << this->_name << " has " << YEL << this->_atk << MAG << " attack" << RES << std::endl;
}
