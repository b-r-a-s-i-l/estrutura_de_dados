#include "Menu.h"



Menu::Menu()
{
}


Menu::~Menu()
{
}

void Menu::chamarSubMenu(Tipo_SubMenu tela)
{
	*submenu = submenu->chamarTela((int)tela);
}
