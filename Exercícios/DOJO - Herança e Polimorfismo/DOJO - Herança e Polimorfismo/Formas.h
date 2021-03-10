#pragma once
#include <iostream>
using namespace std;

class Formas
{
public:
	Formas();
	~Formas();

	virtual void calcularArea() = 0;
	virtual void calcularPerimetro() = 0;
	virtual void imprimirDados() = 0;

protected:
	int area, perimetro;
};

