#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Bob;
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
	Bob.takeDamage(50);
	Bob.attack("Alan");
	std::cout << std::endl << std::endl;
	std::cout << Bob.getHitPoint() << std::endl;
	Bob.beRepaired(1);
}