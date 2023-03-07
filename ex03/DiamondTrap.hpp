#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &src );
		~DiamondTrap();

		DiamondTrap &operator=( DiamondTrap const & src );

		void whoAmI( void ) const;
		void attack( const std::string &target );
		void	showHp( void );
		void	showEnergy( void );
		void	showAtk( void );

	private:
		DiamondTrap( void );
		std::string _name;
		int			_hp;
		int			_energy;
		int			_atk;
};

#endif
