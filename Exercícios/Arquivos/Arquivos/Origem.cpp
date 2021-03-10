#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int * lerDoArquivo() {

	ifstream arqInNum;
	int * vetNum = new int[10], num = 0;

	arqInNum.open("arquivoNum.bin", ios::binary); // Abre o 'arqInNum' como binário.

	if (!arqInNum.is_open()) // Se não abrir, aparece uma mensagem de erro e retorna 0;
	{
		cout << "Erro! Arquivo não abriu!";
		return 0;
	}
	else
	{
		while (!arqInNum.eof() && num < 10) // Enquanto o 'arqInNum' não chegar no fim E num for menor que 20 vai executar.
		{
			arqInNum.read(reinterpret_cast<char*>(&vetNum[num]), sizeof(int)); 
			num++;
		}
		arqInNum.close();
		cout << "Arquivo lido!" << endl;

		return vetNum;

		// 'arqInNum' faz a leitura para dentro do "arquivoNum.bin" e reinterpreta o valor de int guardado dentro do endereço de memória 'vetNum' na posição '[num]' para 'char*', em seguida, 'num' recebe ele + 1. Por fim, retorna 'vetNum' por completo, ou seja, com todas as posições.
	}
}

int main() {

	setlocale(LC_ALL, "ptb");

	int *vetI;
	ofstream arqOutNum;

	arqOutNum.open("arquivoNum.bin", ios::binary);
	if (!arqOutNum.is_open()) cout << "Erro! Arquivo não abriu!";
	else
	{
		for (int i = 0; i < 10; i++)
		{
			arqOutNum.write(reinterpret_cast<char*>(&i), sizeof(int));
		}
		arqOutNum.close();
		cout << "Arquivo escrito!" << endl;
	}

	vetI = lerDoArquivo();
	for (int i = 0; i < 10; i++)
	{
		cout << vetI[i] << endl;
	}

	system("pause");

	return 0;
}