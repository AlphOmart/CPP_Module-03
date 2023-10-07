#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_stamina = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original.getName())
{
	std::cout << "ScavTrap  default constructor called" << std::endl;
	this->_health = 100;
	this->_stamina = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_health = 100;
	this->_stamina = 50;
	this->_attack = 20;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_health > 0 && this->_stamina > 0)
	{
		std::cout << "ScavTrap " + this->_name + " attacks "
				  << target + ", causing " << this->_attack
				  << " point of damage!" << std::endl;
		this->_stamina -= 1;
		return ;
	}
	std::cout << "ClapTrap " + this->_name+ " can't attacks!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << " ScavTrap " + this->_name
				<<" has enable Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}