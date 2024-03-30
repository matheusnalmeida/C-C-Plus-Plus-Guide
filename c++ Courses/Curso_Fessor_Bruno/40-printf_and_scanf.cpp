#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int printf_and_scanf_main() {

	/*
	Imprimindo variavel com printf. Para imprimir as variaveis com o printf, podemos especificar o tipo da mesmo após
	a simbologia de %. Os simbolos que vem para especificar os tipos sao um pouco peculiares e abaixo seguem alguns:
	d,i => inteiro
	x,X => hexadecimal
	u => inteiro sem sinal
	s => string,char*
	f => double 
	p => ponteros
	*/
	//int num = 3;
	//int num_scan;

	//char nome[] = {'M','a' ,'t' ,'h' ,'e' ,'u' ,'s'};
	//printf("Valor da variavel num: %d\nNome: %s\n", num,nome);

	////Lendo teclado com scanf
	//scanf_s("%d", &num_scan);

	//cout << num_scan << endl;
	
	//Formatando casas decimais com o printf
	float pi = M_PI;
	int num = 5;

	printf("Valor de pi: %.2f\n", pi);
	printf("Valor de num com zero a frente: %07d\n", num);
	printf("Valor de pi com zero a frente: %07.1f\n", pi);

	//Modificadores no cout

	cout << "Numero 10 em decimal: " << dec << 10 << endl;
	cout << "Numero 10 em hexadecimal: " << hex << 10 << endl;
	cout << "Numero 10 em octadecimal: " << oct << 10 << endl;

	//Casas decimais no cout
	cout.precision(2);

	cout << "Valor de pi: " << pi << endl;
	cout << "Valor de pi(notacao cientifica): " << pi << scientific << endl;
	cout << "Valor de pi(fixada): " << pi << fixed << endl;

	//Resetando a precisao ao normal
	cout.precision(-1);

	cout << "Valor de pi(precisao normal): " << pi << endl;

	//Informando largura do digito
	cout << "Valor de pi(com largura):" << setfill('x') << setw(9) << pi << endl;
	return 0;

}