//
// Created by Khalifa Almheiri on 2/5/23.
//
#include "Harl.hpp"

int	main(int argc, char *argv[]) {
	if (argc < 2) exit(EXIT_FAILURE);
	Harl hurl;
	hurl.complain(argv[1]);
	exit(EXIT_SUCCESS);
}
