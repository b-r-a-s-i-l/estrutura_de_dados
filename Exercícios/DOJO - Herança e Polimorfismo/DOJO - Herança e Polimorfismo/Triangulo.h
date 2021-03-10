#pragma once
#include "Formas.h"
class Triangulo :
	public Formas
{
public:
	Triangulo();
	~Triangulo();

	void calcularArea();
	void calcularPerimetro();
	void imprimirDados();
protected:
	int ladoA, ladoB, ladoC;
};

