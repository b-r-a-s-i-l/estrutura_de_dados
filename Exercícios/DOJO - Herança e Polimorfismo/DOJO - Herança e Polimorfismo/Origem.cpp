#include "Formas.h"
#include "Elipse.h"
#include "Triangulo.h"
#include "Retangulo.h"

int main() {

	setlocale(LC_ALL, "ptb");

	Formas * formas[3];

	formas[0] = new Elipse;
	formas[1] = new Triangulo;
	formas[2] = new Retangulo;

	for (int i = 0; i < 3; i++)
	{
		formas[i]->calcularArea();
		formas[i]->calcularPerimetro();
		formas[i]->imprimirDados();
		cout << endl;
	}

	system("pause");
	return 0;
}