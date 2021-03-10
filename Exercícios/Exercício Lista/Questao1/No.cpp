#include "No.h"

No::No()
{
	this->proximo = nullptr;
	this->info = 0;
}

No::No(int info)
{
	this->proximo = nullptr;
	this->info = info;
}


No::~No()
{
}

void No::defineProximo(No* prox)
{
	this->proximo = prox;
}

No* No::obtemProximo()
{
	return this->proximo;
}

void No::defineInfo(int info)
{
	this->info = info;
}

int No::obtemInfo()
{
	return this->info;
}
