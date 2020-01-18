#include <iostream>
#include <string>
using namespace std;

struct Carroa {

	string modelo;
	string cor;
	int pot;
	int velMax;
	int vel;

	void insere(string stmodelo, string stcor, int stpot, int stvelMax) {
		modelo = stmodelo;
		cor = stcor;
		pot = stpot;
		velMax = stvelMax;
		vel = 0;
	}

	void mostra() {
		cout << "Nome: " << modelo << endl;
		cout << "Cor: " << cor << endl;
		cout << "Potencia: " << pot << endl;
		cout << "Velocidade atual: " << vel << endl;
		cout << "Velocidade Maxima: " << velMax << endl;
	}

	void mudaVel(int mv){
		vel = mv;
		if (vel > velMax) {
			vel = velMax;
		}
		if (vel < 0) {
			vel = 0;
		}
	}
};

int struct_main() {
	
	Carroa *carros = new Carroa[4];

	Carroa car1,car2,car3,car4;
	car1.insere("tornado", "vermelho", 120, 300);
	//car1.mostra();
	car1.mudaVel(250);
	//cout << "Mostrando alteracao da velocidade " << endl;
	//car1.mostra();

	//Inserindo os elementos em um array para que se facilite a manipulacao dos elementos
	carros[0] = car1;
	carros[1] = car2;
	carros[2] = car3;
	carros[3] = car4;

	carros[0].insere("tornado", "vermelho", 120, 300);
	carros[1].insere("trabalho", "preto", 100, 230);
	carros[2].insere("padrao", "branco", 120, 250);
	carros[3].insere("circo", "azul", 100, 223);
	
	for (int i = 0; i < 4; i++) {
		carros[i].mostra();
		cout << "---------------------------------" << endl;
	}

	return 0;
}