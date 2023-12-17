#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap	Bob("Bob");
	ScavTrap	Alan("Alan");
	FragTrap	Stewe("Stewee");

DiamondTrap	Truc("Truc");
	DiamondTrap	Chose(Truc);

	Truc.whoAmI();
	Chose.whoAmI();
	Bob.attack("Alan");
	Alan.takeDamage(Bob.getAttackDamage());
	Alan.beRepaired(Bob.getAttackDamage());

	Alan.attack("Bob");
	Bob.takeDamage(Alan.getAttackDamage());
	Bob.beRepaired(Alan.getAttackDamage());
	Bob.attack("Alan");

	Stewe.highFivesGuys();
}