#include "Array.h"
#include <iostream>

int main (int argc, char * argv [])
{
	// TODO Add code here to test your Array class.
  
	// Defalt array construct test.
	Array<int> test(10,2);

	for (int i = 0; i < 10; i++) {
		std::cout << "Number in array index " << i << " is " << test[i] << std::endl; 
	}
  
	std::cout << "It compiled! You can calm down" << std::endl;    
	std::cin.ignore();
	return 0;
}
