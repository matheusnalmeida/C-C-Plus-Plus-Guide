#include <iostream>
#include <vector>
#include <string>

int iterator_main() {
	
	std::vector<std::string> produtos = { "mouse","teclado","monitor","Gabinete","cx.som" };

	std::vector<std::string>::iterator it;

	//Apontando para o primeiro e ultimo elemento
	it = produtos.begin();
	std::cout <<"Primeiro elemento: " << *it << std::endl;
	it = produtos.end() - 1;
	std::cout << "Ultimo elemento: " << *it << std::endl;

	/*
	Avancando posicoes no iterator. ALguns metodos listados abaixo:
	1) advance(iterator,numero_de_casa_para_avancar) = Ira avancar o numero de casas especificadas no iterator passado.
	O metodo nao ira retornar nada e o iterator sera alterado para a posicao, além de trabalho com iteradores 
	bi-direcionais e input iterato(Ler somente para frente)
	2) next(iterator,numero_de_casa_para_avancar) = Ira avancar o numero de casas especificadas no iterator passado.
	O metodo ira retornar o elemento para onde se moveu o iterator e nao sera altearada a posicao do iterator,além de 
	trabalho com iteradores bi-direcionais e Forward iterator (Reads/writes forward).
	3)prev(iterator,numero_de_casa_para_recuar): Possui a mesma ideia do next, porem para recuar as casas.
	*/
	//advance
	it = produtos.begin()+1;
	std::advance(it, 3);
	std::cout << "Avancando posicao com advance: " << *it << std::endl;
	it = produtos.begin() + 1;
	std::cout << "Avancando posicao com next: " << *std::next(it,1) << std::endl;
	std::cout << "Recuando posicao com prev: " << *std::prev(it, 1) << std::endl;
	
	//Imprimindo todos os elementos utilizando o iterator
	for (std::vector<std::string>::iterator it = produtos.begin(); it != produtos.end(); it++){
		std::cout << *it << std::endl;
	}
	return 0;
}