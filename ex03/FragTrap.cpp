#include "FragTrap.hpp"

unsigned int	FragTrap::_attack_damage_max;
unsigned int	FragTrap::_hit_points_max;

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap default constructor is called!" << std::endl;
	this->_hit_points_max = 100;
	this->_attack_damage_max = 30;
	this->_name = "Unnamed";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &original)
{
	std::cout << "FragTrap copy constructor is called!" << std::endl;
	*this = original;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "Named FragTrap constructor is called!" << std::endl;
	this->_hit_points_max = 100;
	this->_attack_damage_max = 30;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap&	FragTrap::operator=(const FragTrap &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&original == this)
		return (*this);
	this->_hit_points_max = original._hit_points_max;
	this->_attack_damage_max = original._attack_damage_max;

	this->_name = original._name;
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;
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

unsigned int	FragTrap::getAttackDamageMax()
{
	return (this->_attack_damage_max);
}
unsigned int	FragTrap::getHitPointsMax() {
	return(this->_hit_points_max);
}