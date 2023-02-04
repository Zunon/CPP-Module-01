//
// Created by Khalifa Almheiri on 2/4/23.
//
#include "Zombie.h"

int	main(void)
{
	Zombie	*jeff, *jim;

	jeff = new Zombie();
	jeff->announce();
	delete jeff;
	jim = newZombie("Jim");
	jim->announce();
	randomChump("Jeorge");
	delete jim;
	return (EXIT_SUCCESS);
}
