#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name( "Unnamed" ), _hp( 10 ), _energy( 10 ), _atk( 3 ) {
	std::cout << CYN << "ClapTrap Unnamed has create" << RES << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hp, int energy, int atk ): _name( name ), _hp( hp ), _energy( energy ), _atk( atk ) {
	std::cout << CYN << "ClapTrap " << name << " has create" << RES << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src ) {
	*this = src;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << RED << "ClapTrap " << this->_name << " is destroyed" << RES << std::endl;
}

ClapTrap &ClapTrap::operator=( ClapTrap const & src ) {
	if (this != &src) {
		this->_name = src._name;
		this->_hp = src._hp;
		this->_energy = src._energy;
		this->_atk = src._atk;
	}
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	std::cout << MAG << "ClapTrap " << this->_name << " attacks " << target << " causing " << YEL << this->_atk << MAG << " points of damage!" << RES << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << MAG << "ClapTrap " << this->_name << " takes " << YEL << amount << MAG << " points of damage!" << RES << std::endl;
	this->_hp -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( this->_hp <= 0 ) {
		std::cout << YEL << "ClapTrap " << this->_name << " is destroyed. Cannot be repaired" << RES << std::endl;
	}
	else if ( this->_hp >= 100 ) {
		std::cout << YEL << "ClapTrap " << this->_name << " HP is full. No need to be repaired" << RES << std::endl;
	}
	else {
		std::cout << MAG << "ClapTrap " << this->_name << " recovery " << YEL << amount << MAG << " HP!" << RES << std::endl;
		this->_hp = this->_hp + amount > 10 ? 10 : this->_hp + amount ;
	}
}
