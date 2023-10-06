#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor is called!" << std::endl;
	this->setHealth(100);
	this->setStamina(100);
	this->setAttack(30);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor is called!" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " + this->getName()
				<< " wants to get a HighFives" << std::endl;
}