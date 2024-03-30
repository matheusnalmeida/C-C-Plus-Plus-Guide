#pragma once
#include <string>
#include <iostream>

class Aviao {

public:
	int vel = 0;
	int velMax = 0;
	std::string tipo;
	Aviao(int tp);
	void imprimir();
private:

};
