#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Bob("Bob");
	ScavTrap Alan("Alan");

	Bob.attack("Alan");
	Alan.takeDamage(Bob.getAttack());
	Alan.beRepaired(Bob.getAttack());

	Alan.attack("Bob");
	Bob.takeDamage(Alan.getAttack());
	Bob.beRepaired(Alan.getAttack());
	Bob.attack("Alan");

}