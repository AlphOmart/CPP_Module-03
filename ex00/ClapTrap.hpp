#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	const std::string	_name;
	unsigned int		_health;
	unsigned int		_stamina;
	unsigned int		_attack;

public:
	ClapTrap(const std::string name);
	~ClapTrap();

	void			setAttack(unsigned int new_attack);
	unsigned int	getAttack( void );
	unsigned int	getHealth( void );

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif