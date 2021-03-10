#include "SubMenu.h"



SubMenu::SubMenu()
{
}


SubMenu::~SubMenu()
{
}

SubMenu SubMenu::chamarTela(int tela)
{
	SubMenu * subMenu = new SubMenu;

	switch (tela)
	{
	case 1:
		subMenu = new Login;
		break;
	case 2:
		subMenu = new Load;
		break;
	case 3:
		subMenu = new Save;
		break;
	case 4:
		subMenu = new ConfigJogo;
		break;
	default:
		break;
	}

	return *subMenu;
}
