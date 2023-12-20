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

	// Bob.attack("Alan");
	// Alan.takeDamage(Bob.getAttackDamage());
	// Alan.beRepaired(Bob.getAttackDamage());
	//
	// Alan.attack("Bob");
	// Bob.takeDamage(Alan.getAttackDamage());
	// Bob.beRepaired(Alan.getAttackDamage());
	// Bob.attack("Alan");
	//
	// Alan.guardGate();
	// Bob.setAttack(20);
	// Bob.attack("Alan");
	// Alan.takeDamage(Bob.getAttackDamage());
	//
	// Bob.attack("Stewe");
	// Stewe.takeDamage(Bob.getAttackDamage());
	// Stewe.attack("Bob");
	// Bob.takeDamage(Stewe.getAttackDamage());
	// Stewe.highFivesGuys();
	std::cout << Alan.getName() << " : " << Alan.getEnergyPoint() << std::endl;
	std::cout << Chose.getName() << " : " << Chose.getHitPoint() << std::endl;
	std::cout << Chose.getName() << " : " << Chose.getEnergyPoint() << std::endl;
	std::cout << Chose.getName() << " : " << Chose.getAttackDamage() << std::endl;

	Alan.attack("Chose");
	Chose.takeDamage(Alan.getAttackDamage());
	Chose.attack("Alan");
	std::cout << Chose.getName() << " : " << Chose.getEnergyPoint() << std::endl;
	Chose.guardGate();
	Chose.highFivesGuys();
	Chose.whoAmI();

}
