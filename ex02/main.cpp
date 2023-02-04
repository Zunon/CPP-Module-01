//
// Created by Khalifa Almheiri on 2/4/23.
//
#include <iostream>
#include <string>

int	main(void) {
	std::string brain;
	std::string	*brainPTR;

	brain = "HI THIS IS BRAIN";
	brainPTR = &brain;
	std::string	&brainREF = brain;
	std::cout << "brain's address: " << &brain << std::endl;
	std::cout << "brainPTR's address: " << &brainPTR << std::endl;
	std::cout << "brainREF's address: " << &brainREF << std::endl;
	std::cout << "brain: " << brain << std::endl;
	std::cout << "*brainPTR: " << *brainPTR << std::endl;
	std::cout << "brainREF: " << brainREF << std::endl;
	return (EXIT_SUCCESS);
}
