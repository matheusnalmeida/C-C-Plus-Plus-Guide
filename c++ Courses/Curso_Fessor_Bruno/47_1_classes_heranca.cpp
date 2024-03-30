#include "classes_heranca.h"
#include <iostream>

//Definindo metodos da classe Veiculo
void Veiculo::setTipo(int tipo) {
	this->tipo = tipo;
}

void Veiculo::setArma(bool arma) {
	this->arma = arma;
}

void Veiculo::setvelMax(int velMax) {
	this->velMax = velMax;
}

int Veiculo::getTipo()
{
	return this->tipo;
}

bool Veiculo::getArma() {
	return this->arma;
}

int Veiculo::getvelMaxx() {
	return this->velMax;
}

void Veiculo::imp() {
	std::cout << "Tipo: " << this->tipo << std::endl;
	std::cout << "Velocidade Maxima: " << this->velMax << std::endl;
	std::cout << "Velocidade Atual: " << this->vel << std::endl;
	std::cout << "Arma: " << this->arma << std::endl;
	std::cout << "Quantidade de rodas: " << this->rodas << std::endl;
	std::cout << "Blindagem: " << this->blind << std::endl;
}

//Sintaxe para acessar o construtor da super classe
//Moto::Moto() : Veiculo() {
//}

//Definindo metodos da classe Moto
Moto::Moto() {
	this->blind = true;
	this->rodas = 2;
	this->vel = 0;
	this->setTipo(1);
	this->setArma(false);
	this->setvelMax(120);
}

//Definicao de metodos da classe Carro
Carro::Carro() {
	this->blind = false;
	this->rodas = 4;
	this->vel = 0;
	this->setTipo(2);
	this->setArma(false);
	this->setvelMax(120);	
}

//Definicao de metodos da classe tanque
Tanque::Tanque() {
	this->blind = true;
	this->rodas = 8;
	this->vel = 0;
	this->setTipo(4);
	this->setArma(true);
	this->setvelMax(200);
}