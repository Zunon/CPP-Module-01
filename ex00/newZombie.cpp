//
// Created by Khalifa Almheiri on 2/4/23.
//

#include "Zombie.h"

Zombie	*newZombie(std::string name) {
	return (new Zombie(name));
}
