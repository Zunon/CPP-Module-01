//
// Created by Khalifa Almheiri on 2/4/23.
//

#include "HumanB.h"

HumanB::HumanB(void) {
	name = "Dwayne 'The Rock' Johnson";
	weapon = NULL;
}

HumanB::HumanB(std::string newName) {
	name = newName;
	weapon = NULL;
}

HumanB::HumanB(const HumanB &human) {
	name = human.name;
	weapon = human.weapon;
}

HumanB::HumanB(Weapon *newWeapon) {
	name = "Khalifa";
	weapon = newWeapon;
}

HumanB::HumanB(std::string newName, Weapon *newWeapon) {
	name = newName;
	weapon = newWeapon;
}

void	HumanB::attack(void) {
	std::cout << name + " attacks with their ";
	if (weapon)
		std::cout << weapon->getType() << std::endl;
	else
		std::cout << "arms swinging wildly!" << std::endl;
}

void	HumanB::setWeapon(Weapon *newWeapon) {
	weapon = newWeapon;
}

void	HumanB::setWeapon(const Weapon &newWeapon) {
	weapon = (Weapon *)&newWeapon;
}

HumanB	&HumanB::operator=(const HumanB &human) {
	if (this != &human) {
		name = human.name;
		weapon = human.weapon;
	}
	return (*this);
}

HumanB::~HumanB(void) {
	std::cout << name + " was killed!" << std::endl;
}
