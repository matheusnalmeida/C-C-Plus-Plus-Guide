#pragma once
#include <string>

class Veiculo {
public:
	int vel;
	bool blind;
	int rodas;
	void setTipo(int tipo);
	void setvelMax(int velMax);
	void setArma(bool arma);
	int getTipo();
	int getvelMaxx();
	bool getArma();
	void imp();
private:
	int tipo;
	int velMax;
	bool arma;
};

/*
No momento que vamos fazer a heranca, podemos colocar um atributo de visibilidade antes da classe que sera herdada, e no 
caso esse atributo de visibilidade ira definir o nivel da heranca:
public = So sera acessados os atributos publicos
private = SO serao acessados os atributos privados
protected = So serao acessados os atributos protected
*/
class Moto :public Veiculo {
public:
	Moto();
};

class Carro :public Veiculo {
public:
	Carro();

};

class Tanque :public Veiculo {
public:
	Tanque();

};