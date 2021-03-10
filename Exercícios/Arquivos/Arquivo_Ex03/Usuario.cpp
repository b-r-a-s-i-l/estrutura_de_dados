#include "Usuario.h"



Usuario::Usuario()
{
}


Usuario::~Usuario()
{
}

void Usuario::setId(int _id)
{
	id = _id;
}

void Usuario::setLogin(std::string _login)
{
	login = _login;
}

void Usuario::setSenha(std::string _senha)
{
	senha = _senha;
}
