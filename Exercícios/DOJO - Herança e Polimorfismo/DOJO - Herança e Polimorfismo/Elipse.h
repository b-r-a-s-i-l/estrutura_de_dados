#pragma once
#include "Formas.h"
class Elipse :
	public Formas
{
public:
	Elipse();
	~Elipse();

	void calcularArea();
	void calcularPerimetro();
	void imprimirDados();
};

