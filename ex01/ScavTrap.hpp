#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap( void );
protected:
	bool	_keeper;
public:
	ScavTrap(const std::string& name);
	ScavTrap (const ScavTrap& original);
	~ScavTrap( void );

	ScavTrap&	operator=(const ScavTrap &original);
	void	takeDamage(unsigned int amount);
	void	attack(const std::string &target);
	void	guardGate();
};

#endif