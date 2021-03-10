#pragma once
#include <string>
class Usuario
{
public:
	Usuario();
	~Usuario();

	void setId(int _id);
	void setLogin(std::string _login);
	void setSenha(std::string _senha);
	
	int getId() { return id; }
	std::string getLogin() { return login; }
	std::string getSenha() { return senha; }

protected:
	int id;
	std::string login, senha;
};

