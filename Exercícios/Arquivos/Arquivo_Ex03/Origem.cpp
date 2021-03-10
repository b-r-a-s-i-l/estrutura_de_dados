#include <iostream>
#include <fstream>
#include "Usuario.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "ptb");

	Usuario usuario[3], testeUsuario[3];
	ifstream inFile;
	ofstream outFile;
	
	for (int i = 0; i < 3; i++)
	{
		usuario[i].setId(i + 1);
		if (i == 0) { usuario[i].setLogin("Marcos"); usuario[i].setSenha("mb123"); }
		if (i == 1) { usuario[i].setLogin("Kauana"); usuario[i].setSenha("kd456"); }
		if (i == 2) { usuario[i].setLogin("Cristine"); usuario[i].setSenha("cb789"); }
	}

	outFile.open("User.bin", ios::binary);
	if (outFile.is_open()) 
	{
		for (int i = 0; i < 3; i++)
		{
			outFile.write(reinterpret_cast<char*>(&usuario[i]), sizeof(Usuario));
		}
		cout << "GRAVADO!" << endl;
		system("pause");
	}
	else
	{
		cout << "ERRO!";
		exit(1);
	}
	
	usuario[1].setLogin("Karolina"); usuario[1].setSenha("kh456");
	outFile.seekp(1 * sizeof(Usuario));
	outFile.write(reinterpret_cast<char*>(&usuario[1]), sizeof(Usuario));
	cout << "ALTERADO!" << endl;
	system("pause");
	outFile.close();

	inFile.open("User.bin", ios::binary);
	if (inFile.is_open())
	{
		int i = 0;
		while (!inFile.eof() && i < 3 )
		{
			inFile.read(reinterpret_cast<char*>(&testeUsuario[i]), sizeof(Usuario));
			i++;
		}
		cout << "LIDO!" << endl;
		inFile.close();
	}
	else
	{
		cout << "ERRO!";
		exit(1);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "ID: " << testeUsuario[i].getId() << " Login: " << testeUsuario[i].getLogin() << " Senha: " << testeUsuario[i].getSenha() << endl;
	}
	system("pause");
	return 0;
}