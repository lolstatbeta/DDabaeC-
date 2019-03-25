#include <iostream>

using namespace std;

int addToNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;

	return sum;
}

int multiplyToNumbers(int num_a, int num_b)
{
	int result = num_a * num_b;

	return result;
}

void printHelloWorld()
{
	cout << "Hello World" << endl;

	return; 
}

int main()
{
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;

	cout << addToNumbers(1, 2) << endl;
	cout << multiplyToNumbers(3, 4) << endl;

	printHelloWorld();
	return 0;
}