#pragma once
#include <iostream>

class Veiculo {

public:
	int vel;
	int tipo;
	Veiculo(int tp);
	~Veiculo(); //destructor defined
	int getvelMax();
	bool getLigado();
	void setLigado(bool inf);
private:
	int velMax;
	std::string nome;
	bool ligado;
	void setvelMax(int velMax);
};
			
