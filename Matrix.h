#pragma once
#include <vector>

class Matrix
{
private:
	int m_size;
	std::vector<int*> m_values;
public:
	Matrix(int matrixSize = 5);

	int getSize();
	int& operator()(int i, int j);
	void randomFill(int valueRange = 10);
	void print();
	void addValue(int value);
};

int calculateDeterminant(Matrix& inputMatrix);