#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap (const ScavTrap& original);
	ScavTrap(const std::string& name);
	~ScavTrap( void );

	ScavTrap&	operator=(const ScavTrap &original);
	void	attack(const std::string &target);
	void	guardGate();
};

#endif