#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
	static unsigned int	_energy_points_max;
protected:
	bool	_keeper;
public:
	ScavTrap( void );
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& original);
	~ScavTrap( void );

	ScavTrap&		operator=(const ScavTrap &original);
	unsigned int	getEnergyPointMax();
	void			attack(const std::string &target);
	void			guardGate();
};

#endif