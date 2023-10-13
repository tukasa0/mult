#include <iostream>
using namespace std;

int mult(int value1, int value2);

void Show()
{
	int value1 = 2;
	int value2 = 3;

	//呼び出せないからエラーが出る
	cout << mult(value1, value2) << endl;
}
