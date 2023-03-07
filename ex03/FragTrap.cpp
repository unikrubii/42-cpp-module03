#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap() {
	std::cout << GRN << "FragTrap Unnamed is coming to town!" << RES << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap( name, 100, 100, 30 ) {
	std::cout << GRN << "FragTrap " << _name << " is coming to town!" << RES << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ): ClapTrap( src ) {
	std::cout << GRN << "FragTrap " << _name << " is copied to town!" << RES << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << RED << "FragTrap " << _name << " is dead!" << RES << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &src ) {
	if (this != &src) {
		this->_name = src._name;
		this->_hp = src._hp;
		this->_energy = src._energy;
		this->_atk = src._atk;
	}
	return *this;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << CYN << "FragTrap " << _name << " is giving a high five!" << RES << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	std::cout << MAG << "FragTrap " << _name << " attacks " << target << " causing " << _atk << " points of damage!" << RES << std::endl;
}
