#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :  _name("Unnamed")
{
	std::cout << "default constructor is called!" << std::endl;
	this->_health = 10;
	this->_stamina = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& original) : _name(original.getName())
{
	std::cout << "Copy constructor is called!" << std::endl;
	this->_health = original.getHealth();
	this->_stamina = original.getStamina();
	this->_attack = original.getAttack();
}

ClapTrap::ClapTrap(const std::string name) : _name(name)
{
	std::cout << "named constructor is called!" << std::endl;
	this->_health = 10;
	this->_stamina = 10;
	this->_attack = 0;
}


ClapTrap::~ClapTrap( void )
{
	std::cout << "destructor is called" << std::endl;
}

void			ClapTrap::setAttack(unsigned int new_attack)
{
	this->_attack = new_attack;
}

std::string		ClapTrap::getName( void ) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHealth( void ) const
{
	return (this->_health);
}

unsigned int	ClapTrap::getStamina( void ) const
{
	return (this->_stamina);
}

unsigned int	ClapTrap::getAttack( void ) const
{
	return (this->_attack);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_health && this->_stamina > 0)
	{
		std::cout << "CalpTrap " + this->_name + " attacks "
				  << target + ", causing " << this->_attack
				  << " point of damage!" << std::endl;
		this->_stamina -= 1;
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " can't attacks!" << std::endl;
	this->_attack = 0;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health > 0)
	{
		std::cout << "ClapTrap " + this->_name + " take " << amount
					<< " damages!" << std::endl;
		this->_health -= amount;
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " is already dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health > 0 && this->_stamina > 0)
	{
		std::cout << "ClapTrap " + this->_name + " regain "
					<< amount<< " life point!" << std::endl;
		this->_stamina -= 1;
		this->_health += amount;
		return;
	}
	std::cout << "ClapTrap " + this->_name + " doesn't have enough life or stamina!"
				<< std::endl;
}