#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	const std::string	_name;
	unsigned int		_hit_points;
	unsigned int		_energy_points;
	unsigned int		_attack_damage;
	ClapTrap( void );

public:
	ClapTrap( const ClapTrap& original);
	ClapTrap(const std::string& name);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& original);
	void			setAttack(unsigned int new_attack);

	std::string		getName( void )const;
	unsigned int	getHitPoint( void )const;
	unsigned int	getEnergyPoint( void )const;
	unsigned int	getAttackDamage( void )const;

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif