#include <iostream>


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


int fibonacci(int _n)
{

	int f;
	if (_n == 1) return 1;
	if (_n == 0) return 0;
	if (_n > 1) { return fibonacci(_n - 1) + fibonacci(_n - 2);}

}

int main(){

	int tamanho = 3, vetor[] = { 1, 2, 3 };

	int resultado = somaInteiros(vetor, tamanho);

	setlocale(LC_ALL, "ptb");

	cout << resultado << endl << endl;

	resultado = fatorial(5);

	cout << resultado << endl << endl;

	fibonacci(13);
	

	system("pause");
	return 0;

}