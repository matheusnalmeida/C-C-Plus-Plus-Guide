#include "classes.h"

Veiculo::Veiculo(int tp)
{ //1 - Carro, 2 - Aviao,3 - Navio
    if (tp == 1)
    {
        this->velMax = 800;
        this->nome = "Carro";
    }
    else if (tp == 2)
    {
        this->velMax = 350;
        this->nome = "Aviao";
    }
    else if (tp == 3)
    {
        this->velMax = 180;
        this->nome = "Navio";
    }
    this->ligado = false;
}

Veiculo::~Veiculo() //destructor defined
{
    std::cout << "Hey look I am in destructor" << std::endl;
}

int Veiculo::getvelMax() {
    return this->velMax;
}

void Veiculo::setvelMax(int velMax) {
    this->velMax = velMax;
}

bool Veiculo::getLigado() {
    return this->ligado;
}

void Veiculo::setLigado(bool inf){
    this->ligado = inf;
}
