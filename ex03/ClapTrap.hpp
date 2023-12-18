#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string			_name;
	unsigned int		_hit_points;
	unsigned int		_energy_points;
	unsigned int		_attack_damage;


public:
	ClapTrap( void );
	ClapTrap(const std::string& name);
	ClapTrap( const ClapTrap& original);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& original);
	void			setAttack(unsigned int new_attack);

	std::string		getName( void )const;
	unsigned int	getHitPoint( void )const;
	unsigned int	getEnergyPoint( void )const;
	unsigned int	getAttackDamage( void )const;

	virtual void	attack(const std::string& target);
	virtual void	takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif