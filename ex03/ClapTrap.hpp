#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int		_health;
	int		_stamina;
	int		_attack;

public:
	ClapTrap( void );
	ClapTrap( const ClapTrap& original);
	ClapTrap(const std::string name);
	~ClapTrap();

	void			setAttack(unsigned int new_attack);

	std::string		getName( void )const;
	unsigned int	getHealth( void )const;
	unsigned int	getStamina( void )const;
	unsigned int	getAttack( void )const;

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif