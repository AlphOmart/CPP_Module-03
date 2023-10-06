#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : _name(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_Health = this->FragTrap::_health
}