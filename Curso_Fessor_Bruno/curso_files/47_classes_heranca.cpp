#include <iostream>
#include "classes_heranca.h"

int classes_heranca_main() {

	Moto* mt1 = new Moto();
	Carro* ca1 = new Carro();
	Tanque* tan1 = new Tanque();

	mt1->imp();
	ca1->imp();
	tan1->imp();

	return 0;
}