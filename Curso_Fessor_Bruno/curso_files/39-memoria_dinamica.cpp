#include <iostream>
//#include <cstdio>
#include <stdio.h>
//#include <cstdlib>
#include <stdlib.h>
using namespace std;


int alocacao_dinamica() {
	
	char* nome;
	//A funcao malloc retorna um ponteiro do tipo char, por isso tem que converter o retorno
	nome = (char*) malloc(sizeof(char));


	/*
	Diferente do cin, a funcao gets_s permite que sejam informados caracteres de espaço, sem que os mesmo sejam 
	considerados caracteres terminais(caracteres que finalizam a cadeia de caracteres)
	*/
	fgets(nome,10,stdin);

	cout << nome << endl;

	delete[] nome;
	return 0;
}