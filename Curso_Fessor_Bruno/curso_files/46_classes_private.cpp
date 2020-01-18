#include <iostream>
#include "classes.h"
#include <array>

void limpando_memoria(Veiculo* veiculos[]);

int classes_private_main() {

	Veiculo* v1 = new Veiculo(1);
	Veiculo* v2 = new Veiculo(2);
	Veiculo* v3 = new Veiculo(3);

	std::cout << v1->getvelMax() << std::endl;
	v1->setLigado(true);
	std::cout << v1->getLigado() << std::endl;

	Veiculo* pointers[] = {v1 ,v2 ,v3};
	limpando_memoria(pointers);
	return 0;
}

void limpando_memoria(Veiculo* veiculos[]) {
	int tam = 3;
	for (int i = 0; i < tam; i++) {
		delete veiculos[i];
	}
}