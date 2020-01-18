#include <iostream>
#include <cstdlib>

using namespace std;


int system_main() {
	
	//Chamando o comando de listagem de itens do diretorio atual
	system("dir");

	//Limpando a tela do terminal
	system("cls");

	//Pausando o terminal
	system("pause");

	//Codigo de cores possiveis para o comando color(alterando as cores do terminal). Esses codigos tambem podem ser vistos no terminal digitando o comando color/?		
	/*
	0 - Preto             8 - cinza
	1 - Azul			  9 - Azul claro
	2 - Verde			  A - Verde Claro
	3 - Verde-agua		  B - Verde Agua Claro
	4 - Vermelho		  C - Vermelho Claro
	5 - Roxo			  D - Lilas
	6 - Amarelo			  E - Amarelo claro
	7 - Branco			  F - Branco brilhante
	- A ideia do comando color é que podemos informar dois valor apos a chamada do mesmo, sendo estes respectivamente: a cor do fundo e a cor da letra.
	Ex: color 46 => Fundo vermelho e letra amarela 
	*/
	system("color 46");

	return 0;
}