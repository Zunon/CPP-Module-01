//
// Created by Khalifa Almheiri on 2/4/23.
//
#include "Zombie.h"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(16, "Steve");
	for (int i = 0; i < 16; i++)
		horde[i].announce();
	delete[] horde;
	return (EXIT_SUCCESS);
}
