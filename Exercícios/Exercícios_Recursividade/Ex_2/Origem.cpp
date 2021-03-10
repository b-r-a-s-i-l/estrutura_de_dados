#include <iostream>
#include <string>

using namespace std;

bool verificaPalindromo(string _texto)
{
	if (_texto == "" || _texto.length() == 1)
	{
		return true;
	}
	else
	{
		if (_texto[0] == _texto[_texto.length() - 1])
		{
			char * aux = new char[_texto.length() - 2];

			for (int i = 1, j = 0; i < _texto.length() - 1; i++, j++)
			{
				aux[j] = _texto[i];
			}
			_texto.pop_back();
			_texto.pop_back();
			for (int i = 0; i < _texto.length(); i++)
			{
				_texto[i] = aux[i];
			}
			verificaPalindromo(_texto);
		}
		else
		{
			return false;
		}
	}
}


int main() {

	setlocale(LC_ALL, "ptb");
	
	if (verificaPalindromo("ana")) cout << "É um palindromo" << endl;
	else cout << "Não é um palindromo" << endl;

	if (verificaPalindromo("hannah")) cout << "É um palindromo" << endl;
	else cout << "Não é um palindromo" << endl;

	if (verificaPalindromo("hanna")) cout << "É um palindromo" << endl;
	else cout << "Não é um palindromo" << endl;


	system("pause");
	return 0;
}