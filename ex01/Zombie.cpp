//
// Created by Khalifa Almheiri on 2/4/23.
//

#include "Zombie.h"

Zombie::Zombie(void) {
	name = "Jeff";
}

Zombie::Zombie(const Zombie &zombie) {
	name = zombie.name;
}

Zombie::Zombie(std::string newName) {
	name = newName;
}

Zombie	&Zombie::operator=(const Zombie &zombie) {
	if (this != &zombie)
		name = zombie.name;
	return (*this);
}

void	Zombie::announce(void) {
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName) {
	name = newName;
}

Zombie::~Zombie(void) {
	std::cout << name + ": *dies*" << std::endl;
}
