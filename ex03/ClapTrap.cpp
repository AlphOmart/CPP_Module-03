#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "default constructor is called!" << std::endl;
	this->_name = "Unnamed";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{
	std::cout << "Copy constructor is called!" << std::endl;
	*this = original;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "Named constructor is called!" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&original == this)
		return (*this);
	this->_name = original._name;
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor is called" << std::endl;
}

void			ClapTrap::setAttack(unsigned int new_attack)
{
	this->_attack_damage = new_attack;
}

std::string		ClapTrap::getName( void ) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoint( void ) const
{
	return (this->_hit_points);
}

unsigned int	ClapTrap::getEnergyPoint( void ) const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attack_damage);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points && this->_energy_points > 0)
	{
		std::cout << "CalpTrap " + this->_name + " attacks "
				  << target + ", causing " << this->_attack_damage
				  << " point of damage!" << std::endl;
		this->_energy_points -= 1;
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " can't attacks!" << std::endl;
	this->_attack_damage = 0;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		std::cout << "ClapTrap " + this->_name + " take " << amount
					<< " damages!" << std::endl;
		if (this->_hit_points >= amount)
		{
			this->_hit_points -= amount;
			return ;
		}
		this->_hit_points = 0;
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " is already dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " + this->_name + " regain "
					<< amount<< " life point!" << std::endl;
		this->_energy_points -= 1;
		this->_hit_points += amount;
		return;
	}
	std::cout << "ClapTrap " + this->_name + " doesn't have enough life or stamina!"
				<< std::endl;
}