#include <iostream>

int main()
{
	//int x(123); // x��� ������ ������ �����ߴ�. //initialization
	//x = 123; // assignment operator(=), ���ٶ�� �ǹ̰� �ƴ϶� �Ҵ��� �ǹ�
	
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