#include <iostream>
#include "classes_heranca_multipla.h"


int classes_heranca_multipla_main() {

	Base1* base1 = new Base1();
	Base2* base2 = new Base2();
	Cfb* cfb1 = new Cfb();

	//Verificando os metodos das classes simples
	base1->impBase1();
	base2->impBase2();

	//Verificando a heranca multipla a partir da classe cfb
	std::cout << "Metodos da classe que realizou a heranca multipla(Cfb)" << std::endl;
	cfb1->impBase1();
	cfb1->impBase2();
	return 0;
}