#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap( std::string name );
		ScavTrap( std::string name, int hp, int energy, int atk );
		ScavTrap( ScavTrap const &src );
		~ScavTrap( void );

		ScavTrap	&operator=( ScavTrap const &src );

		void	guardGate( void );
		void	attack(const std::string &target);
};

#endif
