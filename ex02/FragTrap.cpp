#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap default constructor is called!" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original.getName())
{
	std::cout << "FragTrap copy constructor is called!" << std::endl;
	this->operator=(original);
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor is called!" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap&	FragTrap::operator=(const FragTrap &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&original == this)
		return (*this);
	this->_hit_points = original.getHitPoint();
	this->_energy_points = original.getEnergyPoint();
	this->_attack_damage = original.getAttackDamage();
	return (*this);
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