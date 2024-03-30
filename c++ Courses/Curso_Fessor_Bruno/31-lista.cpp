#include <iostream>
/*
As list sao internamente implementadas com linked list, tornando a insercao e remocao da mesma bastante eficiente.
Por outro lado a busca de elementos na list nao e tao rapida, pois como os elementos sao armazenados na memoria de maneira
nao continua, e necessaria se passar por todos os elementos ate se chegar no elemento desejado.
*/
#include <list>
using namespace std;

int lista_main(){

	//Instanciacao de uma lista sem parametros
	list<int> aula;
	//Lista com 5 posicoes
	list<int> aula1(5);
	//Iniciando a lista com 5 posicoes e cada uma com o valor 50
	list<int> aula2(5, 50);

	//Metodo pra unir duas listas
	aula1.merge(aula2);

	//Imprimindo a lista unida
	cout << "Lista unida: [";
	for (int elemento : aula1) {
		cout << elemento << ",";
	}
	cout << "]" << endl;

	//Inserindo no inicio da lista
	for (int i = 0;  i < 5; i++) {
		aula.push_front(i+1);

	}
	
	//Inserindo elementos no meio da lista
	list<int>::iterator it = aula.begin();
	advance(it, 2);
	aula.insert(it, 10);
	//Removendo elementos em uma posicao especifica(lembrando que sera removido um elemento a frente da posicao especificada)
	aula.erase(--it);

	//Comando sort ordena e reverse inverte
	aula.sort();
	aula.reverse();

	//Retornando o tamanho da lista
	int tamanho = aula.size();
	cout << "Tamanho da lista(quantidade de elementos): " << tamanho << endl;

	/*
	Percorrendo a lista. Abaixo estao alguns metodos:
	front: Retorna o primeiro elemento da lista
	back:Retorna o utlimo elemento da lista
	pop_front: Remove o primeiro elemento da lista
	pop_back: Remove o ultimo elemento da lista
	*/
	 
	for (int i = 0; i < tamanho; i++) {
		cout << aula.front() << endl;
		aula.pop_front();
	}

	//Removendo todos os elementos da lista
	aula.clear();

	//Verificando se a lista esta vazia
	cout << aula.empty() << endl;

	
	return 0;
}