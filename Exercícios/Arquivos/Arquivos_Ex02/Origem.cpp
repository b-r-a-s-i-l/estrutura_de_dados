#include <iostream>
#include <fstream>
#include "Item.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "ptb");

	ifstream inFile;
	ofstream outFile;
	Item items[10], invetário[10];

	for (int i = 0; i < 10; i++)
	{
		if (i == 0) items[i] = items[i].setItem(ESPADA);
		if (i == 1) items[i] = items[i].setItem(ESCUDO);
		if (i > 1)  items[i] = items[i].setItem(POCAO);
	}

	outFile.open("Inventario.bin", ios::binary);
	if (!outFile.is_open())
	{
		cout << "ERRO!";
		exit(1);
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			outFile.write(reinterpret_cast<char*>(&items[i]), sizeof(Item));
		}
		cout << "GRAVADO!" << endl;
		outFile.close();
	}
	system("pause");
	inFile.open("Inventario.bin", ios::binary);
	if (!inFile.is_open())
	{
		cout << "ERRO!";
		exit(1);
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			inFile.read(reinterpret_cast<char*>(&invetário[i]), sizeof(Item));
		}
		cout << "LIDO!" << endl;
		inFile.close();
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "ID: " << invetário[i].getId() << " PESO: " << invetário[i].getPeso() << "Kg" << endl;
	}

	system("pause");
}