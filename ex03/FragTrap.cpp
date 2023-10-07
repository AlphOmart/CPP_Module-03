#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap default constructor is called!" << std::endl;
	this->_health = 100;
	this->_stamina = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original.getName())
{
	std::cout << "FragTrap copy constructor is called!" << std::endl;
	this->_health = original.getHealth();
	this->_stamina = original.getStamina();
	this->_attack = original.getAttack();
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor is called!" << std::endl;
	this->_health = 100;
	this->_stamina = 100;
	this->_attack = 30;
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