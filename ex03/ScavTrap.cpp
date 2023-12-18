#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original.getName())
{
	std::cout << "ScavTrap  default constructor called" << std::endl;
	this->operator=(original);
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_keeper = false;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&original == this)
		return (*this);
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;
	this->_keeper = original._keeper;
	return (*this);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		if (_keeper == true)
		{
			std::cout << "ScavTrap " + this->_name + " blocked the shot !" << std::endl ;
			return ;
		}
		std::cout << "ScavTrap " + this->_name + " take " << amount
					<< " damages!" << std::endl;
		if (this->_hit_points >= amount)
		{
			this->_hit_points -= amount;
			return ;
		}
		this->_hit_points = 0;
		return ;
	}
	std::cout << "ScavTrap " + this->_name + " is already dead!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ScavTrap " + this->_name + " attacks "
				  << target + ", causing " << this->_attack_damage
				  << " point of damage!" << std::endl;
		this->_energy_points -= 1;
		return ;
	}
	std::cout << "ClapTrap " + this->_name+ " can't attacks!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	if (_keeper == false)
	{
		_keeper = true;
		std::cout << "ScavTrap " + this->_name
							<<" has enable Gate keeper mode!" << std::endl;
		return ;
	}
	_keeper = false;
	std::cout << " ScavTrap " + this->_name
							<<" has enable Gate keeper mode!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}