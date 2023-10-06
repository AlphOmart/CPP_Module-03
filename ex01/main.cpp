#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Bob("Bob");
	ScavTrap Alan("Alan");

	Bob.attack("Alan");
	Alan.takeDamage(Bob.getAttack());
	Alan.beRepaired(Bob.getAttack());
	for (int i = 0; i < 12; i++)
	{
		Bob.attack("Alan");
		Alan.takeDamage(Bob.getAttack());
	}

	Alan.setAttack(10);
	Alan.attack("Bob");
	Bob.takeDamage(Alan.getAttack());
	Bob.beRepaired(Alan.getAttack());
	Bob.attack("Alan");

}