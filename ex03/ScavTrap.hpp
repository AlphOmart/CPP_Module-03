#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
	ScavTrap( void );
	bool	_keeper;

public:
	ScavTrap(const std::string& name);
	ScavTrap (const ScavTrap& original);
	~ScavTrap( void );

	ScavTrap&	operator=(const ScavTrap &original);
	virtual void	takeDamage(unsigned int amount);
	virtual void	attack(const std::string &target);
	void	guardGate();
};

#endif