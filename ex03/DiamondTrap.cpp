#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("undifined_clap_name")
{
	std::cout << "Default constructor DiamondTrap called!" << std::endl;

	this->_hit_points = this->FragTrap::_hit_points;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = this->FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const std::string& name) :  ClapTrap(name + "_clap_name"), ScavTrap(name),
			FragTrap(name), _name(name)
{
	std::cout << "constructor DiamondTrap called!" << std::endl;
	this->_hit_points = this->FragTrap::_hit_points;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = this->FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) :
			ClapTrap(original),
			ScavTrap(original),
			FragTrap(original)
{
	std::cout << "Copy constructor DiamondTrap called!" << std::endl;
	this->operator=(original);
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &original)
{
	this->_name = original._name;
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;
	return (*this);
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor Called" << std::endl;
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
