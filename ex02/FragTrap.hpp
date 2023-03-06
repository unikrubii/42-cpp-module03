#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap( std::string name );
		FragTrap( FragTrap const &src );
		~FragTrap( void );

		FragTrap	&operator=( FragTrap const &src );

		void	highFivesGuys( void );
		void	attack(const std::string &target);
};

#endif