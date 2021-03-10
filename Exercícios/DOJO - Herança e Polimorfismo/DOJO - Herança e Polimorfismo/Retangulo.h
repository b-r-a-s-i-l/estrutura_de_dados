#pragma once
#include "Formas.h"
class Retangulo :
	public Formas
{
public:
	Retangulo();
	~Retangulo();

	void calcularArea();
	void calcularPerimetro();
	void imprimirDados();

protected:
	int base, altura;
};

