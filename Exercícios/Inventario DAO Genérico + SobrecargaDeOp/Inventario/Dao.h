#pragma once
#include "Item.h"
#include <fstream>

using namespace std;


template <class T>
class Dao
{
public:
	
	virtual T * obtemTodosItens() = 0;
	virtual bool guardaTodosItens(T * _it) = 0;
	
};



