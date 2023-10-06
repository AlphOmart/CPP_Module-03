#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->setHealth(100);
	this->setStamina(50);
	this->setAttack(20);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getHealth() && this->getStamina())
	{
		std::cout << "ScavTrap " + this->getName() + " attacks "
				  << target + ", causing " << this->getAttack()
				  << " point of damage!" << std::endl;
		this->setStamina(this->getStamina() - 1);
		return ;
	}
	std::cout << "ClapTrap " + this->getName()+ " can't attacks!" << std::endl;
	this->setAttack(0);
}

void	ScavTrap::guardGate( void )
{
	std::cout << " ScavTrap " + this->getName()
				<<" has enable Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}