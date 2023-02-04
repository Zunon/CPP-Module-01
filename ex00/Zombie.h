//
// Created by Khalifa Almheiri on 2/4/23.
//

#ifndef CPP_MODULE_01_ZOMBIE_H
# define CPP_MODULE_01_ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
	std::string	name;
	public:
		Zombie (void);
		Zombie (const Zombie &);
		Zombie (std::string);
		Zombie &operator= (const Zombie &);
		void announce (void);
		~Zombie (void);
};

Zombie	*newZombie(std::string);
void	randomChump(std::string name);

#endif //CPP_MODULE_01_ZOMBIE_H
