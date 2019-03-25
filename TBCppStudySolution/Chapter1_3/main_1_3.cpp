#include <iostream>

int main()
{
	//int x(123); // x라는 정수형 변수를 선언했다. //initialization
	//x = 123; // assignment operator(=), 같다라는 의미가 아니라 할당의 의미
	
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;  //3

	int y = x;
	std::cout << y << std::endl; //3

	std::cout << x+y << std::endl; //6
	std::cout << x << std::endl; //3

	int z;
	std::cout << z << std::endl; //0

	return 0;
}