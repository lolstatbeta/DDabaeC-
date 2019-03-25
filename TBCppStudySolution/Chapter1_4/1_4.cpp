#include <iostream> //cout, cin, endl, ...
#include <cstdio> // printf

int main()
{
	using namespace std;

	//int x = 1024;
	//double pi = 3.141592;
	//
	//std::cout << "I love this lecture!\n" << std::endl;
	////std라는 이름 공간안의 cout을 사용하기 위해 :: 사용
	//std::cout << "x is " << x << "pi is " << pi << std::endl;
	//
	//cout << "abc" << "\t" << "def" << endl;
	//cout << "ab" << "\t" << "cdef" << endl;

	//cout << "\a"; // 띵동 소리 출력 

	int x = 1;
	cout << "before your input, x was " << x << endl;

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}