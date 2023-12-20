#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default constructor DiamondTrap called!" << std::endl;
	this->ClapTrap::_name = "Unndifined_clap_name";
	this->_name = "Unndifined";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::getEnergyPointMax();;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ScavTrap(name), FragTrap(name)
{
	std::cout << "constructor DiamondTrap called!" << std::endl;
	this->ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::getHitPointsMax();
	this->_energy_points = ScavTrap::getEnergyPointMax();
	this->_attack_damage = FragTrap::getAttackDamageMax();
}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	std::cout << "Copy constructor DiamondTrap called!" << std::endl;
	*this = original;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &original)
{
	this->ClapTrap::_name = original.ClapTrap::_name;
	this->_name = original._name;
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;
	return (*this);
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " + this->_name << std::endl;
	std::cout << "My ClapTrap name is " + ClapTrap::_name << std::endl;
}
