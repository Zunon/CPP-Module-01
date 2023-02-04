//
// Created by Khalifa Almheiri on 2/5/23.
//
#include <iostream>
#include <fstream>
#include <string>

void	fakeSed(std::ifstream &input, std::ofstream &output, std::string preImage, std::string postImage) {
	std::string line;
	size_t 		pos;
	while (getline(input, line)) {
		pos = 0;
		while (pos += postImage.length()) {
			pos = line.find(preImage, pos);
			if (pos == std::string::npos) break;
			line.erase(pos, preImage.length());
			line.insert(pos, postImage);
		}
		output << line << std::endl;
	}
}

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Incorrect amount of arguments" << std::endl;
		return (EXIT_FAILURE);
	} else if (!(argv[1][0])) {
		std::cout << "File name can't be empty!" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string name(argv[1]);
	std::string preImage(argv[2]);
	std::string postImage(argv[3]);
	std::ifstream input(name);
	std::ofstream output(name + ".replace");
	if (input.is_open() && output.is_open())
		fakeSed(input, output, preImage, postImage);
	else {
		std::cout << "Unable to open file streams!" << std::endl;
		return (EXIT_FAILURE);
	}
	if (input.is_open()) input.close();
	if (output.is_open()) output.close();
	return (EXIT_SUCCESS);
}
