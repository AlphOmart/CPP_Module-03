#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : _name("Unname")
{
	std::cout << "Default constructor DiamondTrap called!" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_health = this->FragTrap::_health;
	this->_stamina = this->ScavTrap::_stamina;
	this->_attack = this->FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const std::string& name) :  ClapTrap(name), ScavTrap(name),
			FragTrap(name), _name(name)
{
	std::cout << "constructor DiamondTrap called!" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_health = this->FragTrap::_health;
	this->_stamina = this->ScavTrap::_stamina;
	this->_attack = this->FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) :ClapTrap(original),
			ScavTrap(original), FragTrap(original)
{
	std::cout << "Copy constructor DiamondTrap called!" << std::endl;
	ClapTrap::_name = original.getName() + "_clap_name";
	this->_health = original._health;
	this->_stamina = original._stamina;
	this->_attack = original._attack;
}

void	DiamondTrap::attack( const std::string &target )
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " + this->_name << std::endl;
	std::cout << "My ClapTrap name is " + ClapTrap::_name << std::endl;
}
