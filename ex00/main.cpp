#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Bob("Bob");
	ClapTrap Alan("Alan");

	Bob.attack("Alan");
	Alan.takeDamage(Bob.getAttackDamage());
	Alan.beRepaired(Bob.getAttackDamage());

	for (int i = 0; i < 12; i++)
	{
		Bob.attack("Alan");
		Alan.takeDamage(Bob.getAttackDamage());
	}

	Alan.setAttack(10);
	Alan.attack("Bob");
	Bob.takeDamage(Alan.getAttackDamage());
	Bob.beRepaired(Alan.getAttackDamage());
	Bob.attack("Alan");

}