#include "Array_Base.h"
#include "Array.h"
#include <iostream>

int main (int argc, char * argv [])
{
	// TODO Add code here to test your Array class.
  
	// Defalt array construct test.
	Array_Base<int> arraybase(10,2);

	Array<int> array(10,2);

  
	std::cout << "It compiled! You can calm down" << std::endl;    
	std::cin.ignore();
	return 0;
}
