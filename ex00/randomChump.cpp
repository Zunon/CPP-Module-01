//
// Created by Khalifa Almheiri on 2/4/23.
//

#include "Zombie.h"

void	randomChump(std::string name) {
	Zombie chump = Zombie(name);
	chump.announce();
}
