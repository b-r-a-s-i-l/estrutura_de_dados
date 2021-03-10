#include <iostream>
#include <string>

using namespace std;

void inverte(string _texto, int _n)
{
	for (; _n > 0; _n--)
	{
		cout << _texto[_n - 1];
	}
	cout << endl;
}



int main() {

	setlocale(LC_ALL, "ptb");
	string inv;

	inverte("abc", 3);

	system("pause");
	return 0;
}