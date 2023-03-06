#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include "../color.hpp"

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_atk;

	public:
		ClapTrap( void );
		ClapTrap( std::string name, int hp, int energy, int atk );
		ClapTrap( ClapTrap const &src );
		~ClapTrap( void );

		ClapTrap	&operator=( ClapTrap const &src );

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
