#include <iostream>
#include <string>

using namespace std;

int mdc(int m, int n)
{
	if (n == 0) return m;
	else return mdc(n, m % n);
}

int main() {

	setlocale(LC_ALL, "ptb");

	cout << mdc(12, 20) << endl;

	system("pause");
	return 0;
}