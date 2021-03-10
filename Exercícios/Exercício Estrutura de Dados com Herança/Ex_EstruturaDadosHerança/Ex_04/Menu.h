#pragma once
#include "SubMenu.h"
enum Tipo_SubMenu { LOGIN, SAVE, LOAD, CONFIG, };
class Menu
{
public:
	Menu();
	~Menu();

	void chamarSubMenu(Tipo_SubMenu tela);

protected:
	SubMenu * submenu;
};

