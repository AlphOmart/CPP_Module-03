#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap	Bob("Bob");
	ScavTrap	Alan("Alan");
	FragTrap	Stewe("Stewe");

	Bob.attack("Alan");
	Alan.takeDamage(Bob.getAttackDamage());
	Alan.beRepaired(Bob.getAttackDamage());

	Alan.attack("Bob");
	Bob.takeDamage(Alan.getAttackDamage());
	Bob.beRepaired(Alan.getAttackDamage());
	Bob.attack("Alan");

	Alan.guardGate();
	Bob.setAttack(20);
	Bob.attack("Alan");
	Alan.takeDamage(Bob.getAttackDamage());

	Bob.attack("Stewe");
	Stewe.takeDamage(Bob.getAttackDamage());
	Stewe.attack("Bob");
	Bob.takeDamage(Stewe.getAttackDamage());
	Stewe.highFivesGuys();
}