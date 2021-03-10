#include <iostream>
#include "Cubo.h"

using namespace std;

int main() {

	Cubo cubo;
	float x, y, z;
	int contador = 1;


	setlocale(LC_ALL, "ptb");

	do
	{
		cout << "Digite o valores entre 0.1 a 20.0 das coordenadas do " << contador << "º ponto do retangulo: " << endl;
		switch (contador)
		{
		case 1: cout << "[PONTO SUPERIOR ESQUERDO]" << endl; break;
		case 2: cout << "[PONTO SUPERIOR DIREITO]" << endl; break;
		case 3: cout << "[PONTO INFERIOR DIREITO]" << endl; break;
		case 4: cout << "[PONTO INFERIOR ESQUERDO]" << endl; break;
		}
		cout << "Para X do ponto: ";
		cin >> x;
		cout << "Para Y do ponto: ";
		cin >> y;

		if ((x > 0 && x < 21) && (y > 0 && y < 21))
		{
			cubo.setPonto(contador - 1, x, y);
			contador++;
			cout << endl;
		}
		else
		{
			cout << "Algum dos seus valores estão fora do limite determinado." << endl;
		}
	} while (contador < 5);

	do
	{
		cout << "Agora digite o valor entre 0.1 a 20.0 para a profundidade: " << endl;
		cin >> z;

		if (z > 0 && z < 21)
		{
			cubo.setLargura(z);
			cout << endl;
		}
		else
		{
			cout << "Seu valor está fora do limite determinado." << endl;
		}

	} while (z < 1 && z > 20);
	


	cubo.realizarCalcs();

	cout << "Área: " << cubo.getArea() << endl
		<< "Perímetro: " << cubo.getPerimetro() << endl
		<< "Volume: " << cubo.getVolume() << endl
		<< "Altura: " << cubo.getAltura() << endl
		<< "Comprimento: " << cubo.getComprimento() << endl
		<< "Largura: " << cubo.getLargura() << endl;

	system("pause");
	return 0;
}