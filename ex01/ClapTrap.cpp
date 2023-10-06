#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name)
{
	std::cout << "ClapTrap constructor is called" << std::endl;
	this->_health = 10;
	this->_stamina = 10;
	this->_attack = 0;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor is called" << std::endl;
}

void		ClapTrap::setHealth(unsigned int new_health)
{
	this->_health = new_health;
}

void		ClapTrap::setStamina(unsigned int new_stamina)
{
	this->_stamina = new_stamina;
}

void		ClapTrap::setAttack(unsigned int new_attack)
{
	this->_attack = new_attack;
}

std::string	ClapTrap::getName( void )
{
	return (this->_name);
}

int			ClapTrap::getHealth( void )
{
	return (this->_health);
}

int			ClapTrap::getStamina( void )
{
	return (this->_stamina);
}

int			ClapTrap::getAttack( void )
{
	return (this->_attack);
}

void		ClapTrap::attack(const std::string &target)
{
	if (this->_health > 0 && this->_stamina > 0)
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

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health > 0)
	{
		std::cout << "ClapTrap " + this->_name + " take " << amount
					<< " damages!" << std::endl;
		this->_health -= amount;
		std::cout << this->_health << std::endl;
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " is already dead!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health > 0 && this->_stamina > 0)
	{
		std::cout << "ClapTrap " + this->_name + " regain "
					<< amount << " life point!" << std::endl;
		this->_stamina -= 1;
		this->_health += amount;
		return;
	}
	std::cout << "ClapTrap " + this->_name + " doesn't have enough life or stamina!"
				<< std::endl;
}