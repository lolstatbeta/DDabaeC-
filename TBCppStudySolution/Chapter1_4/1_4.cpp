#include <iostream> //cout, cin, endl, ...
#include <cstdio> // printf

int main()
{
	using namespace std;

	//int x = 1024;
	//double pi = 3.141592;
	//
	//std::cout << "I love this lecture!\n" << std::endl;
	////std��� �̸� �������� cout�� ����ϱ� ���� :: ���
	//std::cout << "x is " << x << "pi is " << pi << std::endl;
	//
	//cout << "abc" << "\t" << "def" << endl;
	//cout << "ab" << "\t" << "cdef" << endl;

	//cout << "\a"; // �� �Ҹ� ��� 

	int x = 1;
	cout << "before your input, x was " << x << endl;

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}