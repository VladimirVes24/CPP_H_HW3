#include <list>
#include <iostream>


void printList(const std::list<double>& list)
{
	for (auto it = list.begin(); it != list.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void addAverage(std::list<double>& list)
{
	int count = 0;
	double  sum = 0;
	for (auto it = list.begin(); it != list.end(); ++it)
	{
		sum += *it;
		++count;
	}
	list.push_back(sum / count);
}