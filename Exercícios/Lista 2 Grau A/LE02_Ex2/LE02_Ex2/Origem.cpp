#include <iostream>
#include "Retangulo.h"

using namespace std;

int main() {

	Retangulo retangulo;
	float x, y;
	int contador = 1;


	setlocale(LC_ALL, "ptb");

	do
	{
		cout << "Digite o valores entre 0.0 a 20.0 das coordenadas do " << contador << "º ponto do retangulo: " << endl;
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

		if ((x > 0 && x < 20) && (y > 0 && y < 20))
		{
			retangulo.setPonto(contador - 1, x, y);
			contador++;
			cout << endl;
		}
		else
		{
			cout << "Algum dos seus valores estão fora do limite determinado." << endl;
		}
	} while (contador < 5);

	retangulo.realizarCalcs();

	cout << "Área: " << retangulo.getArea() << endl
		<< "Perímetro: " << retangulo.getPerimetro() << endl
		<< "Altura: " << retangulo.getAltura() << "         Comprimento: " << retangulo.getComprimento() << endl
		<< "Com essas medidas você possiu um " << retangulo.defineTipo() << endl;


	system("pause");
	return 0;
}