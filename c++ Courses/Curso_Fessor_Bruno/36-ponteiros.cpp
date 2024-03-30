#include <iostream>
using namespace std;

void somar(int* num, int valor);
void ptar(float* vetor);

/*
Ponteiros sao variaveis que apontam para o endereco de memoria de outras variaveis. Variaveis que sao ponteiros,
tem de possuir o mesmo tipo da variavel que estara no endereco de memoria a ser recebido pelo ponteiro.*/
int ponteiros_main() {
	
	//Criando um ponteiro
	int *p;
	//Designando endereco de memoria para a variavel
	int a = 3;
	p = &a;
	//Alterando o valor que esta salvo no endereco de memoria armazenado em p
	*p = 54;

	/*
	Usando o ponteiro com vetor(quando colocamos um vetor em um ponteiro, automaticamente o mesmo ira referenciar 
	o primeiro elemento do vetor)
	*/
	int vetor[10];
	int *pv;

	pv = &vetor[0];
	*pv = 1;
	cout << pv << endl;
	cout << vetor[0] << endl << endl; 

	//Passando o ponteiro para as outras posicoes do vetor
	pv+=1;
	*pv = 2;
	cout << pv << endl;
	cout << vetor[1] << endl << endl;

	pv+=1;
	*pv = 3;
	cout << pv << endl;
	cout << vetor[2] << endl << endl;

	pv = vetor;

	cout << *pv << endl;

	//Testando o ponteiro com as funcoes
	int num = 3;
	float vetorf[5];
	int* pf = &num;

	cout << "Antes da atribuicao: " << num << endl;

	somar(pf,3);

	cout << "Depois da atribuicao: " << num << endl;
  
	float* par = vetorf;

	cout << "Vetor antes da mudanca: [";

	for (float elemento : vetorf) {
		cout << elemento << ",";
	}
	cout << "]" << endl;

	ptar(par);

	cout << "Vetor apos da mudanca: [";

	for (float elemento : vetorf) {
		cout << elemento << ",";
	}
	cout << "]" << endl;

	return 0;
}

void somar(int* num, int valor) {
	*num += valor;
}

void ptar(float* vetor) {
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;
	vetor[3] = 4;
	vetor[4] = 5;
}