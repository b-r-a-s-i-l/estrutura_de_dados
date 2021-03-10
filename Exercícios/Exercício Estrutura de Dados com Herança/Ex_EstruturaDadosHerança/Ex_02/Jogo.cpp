#include "Jogo.h"



Jogo::Jogo()
{
}


Jogo::~Jogo()
{
}

void Jogo::inicializarCena(int _cena)
{
	cena[_cena].carregarCena();
}
