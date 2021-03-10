#include <iostream>
#include <string>

using namespace std;

int somaInteiros(int * _vetor, int _tamanho)
{
	if (_tamanho == 0)
	{
		return 0;
	}
	else
	{
		return _vetor[_tamanho - 1] + somaInteiros(_vetor, _tamanho - 1);
	}
}

int main() {

	setlocale(LC_ALL, "ptb");

	int tamanho = 3, vetor[] = { 1, 2, 3 };
	int resultado = somaInteiros(vetor, tamanho);

	cout << resultado << endl;

	system("pause");
	return 0;
}