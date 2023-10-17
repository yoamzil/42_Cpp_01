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

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	// To print memory addresses
	std::cout << "Memory address of the string is          : " << &string << std::endl;
	std::cout << "Memory address held by the pointer is    : " << stringPTR << std::endl;
	std::cout << "Memory address held by the reference is  : " << &stringREF << std::endl
			  << std::endl;

	// To print values
	std::cout << "The value of the string is             : " << string << std::endl;
	std::cout << "The value pointed by the pointer is    : " << *stringPTR << std::endl;
	std::cout << "The value pointed by the reference is  : " << stringREF << std::endl;
}
