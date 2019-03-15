#include "Array_Base.h"
#include "Array.h"
#include <string>
#include "Stack.h"
#include "Queue.h"
#include "Command.h"
#include <iostream>
#include "Command.h"
#include "Binary_Command.h"

int main (int argc, char * argv [])
{
	// TODO Queue
	Queue<int> que;

	try {
	  que.dequeue();
	} catch (...) {
	  std::cout << "Queue is empty" << std::endl;
	}

	for (int i = 0; i < 10; i++) {
	  que.enqueue(i);
        }

	que.enqueue(200);

	int temp;
	for (int i = 0; i < 10; i++) {
	  temp = que.dequeue();
	  std::cout << temp << std::endl;
	}


	std::cout << "It compiled" << std::endl;
	std::cin.ignore();
	return 0;
}
