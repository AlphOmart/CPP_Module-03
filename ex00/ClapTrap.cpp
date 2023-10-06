#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name)
{
	std::cout << "constructor is called" << std::endl;
	this->_health = 10;
	this->_stamina = 10;
	this->_attack = 0;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "destructor is called" << std::endl;
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
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health > 0)
	{
		std::cout << "ClapTrap " + this->_name + " take " << amount
					<< " damages!" << std::endl;
		this->health -= amount;
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " is already dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_stamina > 0)
	{
		std::cout << "ClapTrap " + this->_name + " regain"
					<< amount<< "life point!" << std::endl;
		this->_stamina -= 1;
		this->_health += amount;
		return;
	}
	std::cout << "ClapTrap " + this->_name + " doesn't have enough stamina!"
				<< std::endl;
}