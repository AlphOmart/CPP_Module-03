#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	const std::string	_name;
	int					_health;
	int					_stamina;
	int					_attack;

public:
	ClapTrap(const std::string name);
	~ClapTrap();

	void		setHealth(unsigned int new_health);
	void		setStamina(unsigned int new_stamina);
	void		setAttack(unsigned int new_attack);

	std::string	getName( void );
	int			getHealth( void );
	int			getStamina( void );
	int			getAttack( void );

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif