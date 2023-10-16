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

#include "Zombie.hpp"
// #include "randomChump.cpp"

int main(void)
{
    // To create a zombie in the stack using the constructor

    Zombie  zombie("StackZombie");
    zombie.announce();

    // To create a zombie in the stack using the randomChump function

    zombie.randomChump("randomZombie");

    // To create a zombie in the heap

    Zombie  *heapzombie = zombie.newZombie("HeapZombie");
    heapzombie->announce();
    delete heapzombie;
}