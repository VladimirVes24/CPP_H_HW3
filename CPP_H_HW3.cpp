#include <iostream>
#include <list>
#include "AddAverage.h"
#include "Matrix.h"
#include "MyIterator.h"



int main()
{
	//Task 1
	std::cout << "Task 1:\n";
	std::list<double> example = { 1.2, 5.3, 4.2, 6.2, 1.5 };
	printList(example);
	addAverage(example);
	printList(example);

	//Task 2
	std::cout << "\nTask 2:" << std::endl;
	Matrix matr;
	matr.randomFill();
	matr.print();
	std::cout << "Determinant is: " << calculateDeterminant(matr) << std::endl;

	//Task 3
	std::cout << "\nTask 3:\n";
	MyContainer arr;
	for (auto it : arr)
	{
		it = 0;
		std::cout << it << " ";
	}
}

