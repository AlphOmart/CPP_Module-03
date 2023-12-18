#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{

	ClapTrap	Bob("Bob");
	ScavTrap	Alan("Alan");
	FragTrap	Stewe("Stewe");
	DiamondTrap	Chose("Chose");

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

	Alan.attack("Chose");
	Chose.takeDamage(Alan.getAttackDamage());
	Chose.attack("Alan");
	Alan.takeDamage(Chose.getAttackDamage());
	Chose.guardGate();
	Chose.highFivesGuys();
}
