#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
	DiamondTrap( void );

public:
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& original);

	DiamondTrap& operator=(const DiamondTrap &original);
	~DiamondTrap();

	void	whoAmI( void );
	void	attack( const std::string &target );
};

#endif