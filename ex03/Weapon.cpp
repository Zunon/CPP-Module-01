//
// Created by Khalifa Almheiri on 2/4/23.
//

#include "Weapon.h"

Weapon::Weapon(void) {
	type = "knife";
}

Weapon::Weapon(const Weapon &weapon) {
	type = weapon.type;
}

Weapon::Weapon(std::string newType) {
	type = newType;
}

std::string	Weapon::getType(void) {
	return (type);
}

void		Weapon::setType(std::string newType) {
	type = newType;
}

Weapon		&Weapon::operator=(const Weapon &weapon) {
	if (this != &weapon)
		type = weapon.type;
	return (*this);
}

Weapon::~Weapon(void) {
	std::cout << type << " broke!" << std::endl;
}
