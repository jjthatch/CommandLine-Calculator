#include "Array_Base.h"
#include "Array.h"
#include <string>
//#include "Fixed_Array.h"
//#include "Stack.h"
//#include "Queue.h"
#include <iostream>

int main (int argc, char * argv [])
{
	// TODO Add code here to test your Array class.


	Array<int> arr(10);
	for (int i = 0; i < 10; i++)
	{
	  arr[i] = i;
	}

	Array<int> arr1(arr);

	for (int i = 0; i < 10; i++)
	{
	  std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Max size is" << arr.max_size() << "\n Cur Size is " << arr.size() << "\n and the element at position 5 is " << arr.get(5) << std::endl;

	// Testing Find functions
	std::cout << "Finding (5): " << arr1.find(5) << std::endl;
	std::cout << "finding (5,6): " << arr1.find(5,6) << std::endl;

	// Testing Resize: Large Case
	std::cout << "Initiating Resize" << std::endl;
	arr1.resize(20);
	std::cout <<"Resize complete" << std::endl;
	for (int i =0; i < arr1.size(); i++)
	{
	  std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Begining to shrink" << std::endl;
	// Testing Resize: Small Case
	arr1.resize(5);
	std::cout <<" Help me I'm shrinking... noooo" << std::endl;
	for (int i = 0; i < arr1.size(); i++)
	{
	  std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;



	std::cout << "It compiled! You can calm down" << std::endl;
	std::cin.ignore();
	return 0;
}
