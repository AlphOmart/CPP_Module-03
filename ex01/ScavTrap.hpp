#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
protected:
	bool	_keeper;
public:
	ScavTrap( void );
	ScavTrap(const std::string& name);
	ScavTrap (const ScavTrap& original);
	~ScavTrap( void );

	ScavTrap&	operator=(const ScavTrap &original);
	void		attack(const std::string &target);
	void		guardGate();
};

#endif