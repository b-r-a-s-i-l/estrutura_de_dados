#include "Cena.h"



Cena::Cena()
{
}


Cena::~Cena()
{
}

void Cena::carregarCena()
{
	for (int i = 0; i < 50; i++)
	{
		gameObj[i].carregarObjeto();
	}
}
