//
// Created by Khalifa Almheiri on 2/4/23.
//

#include "HumanA.h"

HumanA::HumanA(void) {
	name = "Danny Trejo";
	weapon = new Weapon("machete");
	defaulted = true;
}

HumanA::HumanA(const HumanA &human) {
	name = human.name;
	weapon = human.weapon;
	defaulted = false;
}

HumanA::HumanA(const Weapon &newWeapon) {
	name = "Khalifa";
	weapon = (Weapon *)(&newWeapon);
	defaulted = false;
}

HumanA::HumanA(std::string newName, const Weapon &newWeapon) {
	name = newName;
	weapon = (Weapon *)(&newWeapon);
	defaulted = false;
}

void	HumanA::attack(void) {
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}

HumanA	&HumanA::operator=(const HumanA &human) {
	if (this != &human) {
		name = human.name;
		weapon = human.weapon;
	}
	return (*this);
}

HumanA::~HumanA(void) {
	std::cout << name + " was killed!" << std::endl;
	if (defaulted) delete weapon;
}
