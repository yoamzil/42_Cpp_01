/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "file.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		source = av[1];
		std::string		destination = source + ".replace";

		std::ifstream	sourceFile(source);
		std::ofstream	destinationFile(destination);

		if (!sourceFile.is_open() || !destinationFile.is_open())
		{
			std::cerr << "Could not open files for copying." << std::endl;
			return (1);
		}

		std::string		s1 = av[2];
		std::string		s2 = av[3];
		std::string		line;
		size_t			index;

		while (std::getline(sourceFile, line))
		{
			index = line.find(s1);
			while (index != std::string::npos)
			{
				line.erase(index, s1.length());
				line.insert(index, s2);
				index = line.find(s1, index + s2.length());
			}
			destinationFile << line << '\n';
		}
		// if (!std::getline(sourceFile, line))
		// {
		// 	std::cout << "EMPTY FILE." << std::endl;
		// 	return (1);
		// }
		sourceFile.close();
		destinationFile.close();

		std::cout << "File copied successfully." << std::endl;
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return 0;
}
