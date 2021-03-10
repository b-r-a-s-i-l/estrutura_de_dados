#include <iostream>
#include <string>

using namespace std;

int fatorial(int _numero)
{
	if (_numero == 0)
	{
		return 1;
	}
	else
	{
		return _numero * fatorial(_numero - 1);
	}
}

int main() {

	setlocale(LC_ALL, "ptb");

	cout << fatorial(5) << endl;
	
	system("pause");
	return 0;
}