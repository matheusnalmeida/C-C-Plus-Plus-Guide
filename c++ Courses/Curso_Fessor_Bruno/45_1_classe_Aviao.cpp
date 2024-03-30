#include "Aviao.h"

Aviao::Aviao(int tp)
{ //1 -Jato, 2 - Monomotor,3 - Planador
    if (tp == 1)
    {
        this->velMax = 800;
        this->tipo = "Jato";
    }
    else if (tp == 2)
    {
        this->velMax = 350;
        this->tipo = "Monomotor";
    }
    else if (tp == 3)
    {
        this->velMax = 180;
        this->tipo = "Planador";
    }
}

void Aviao::imprimir()
{
    std::cout << "Tipo: " << this->tipo << std::endl;
    std::cout << "Velocidade Maxima: " << this->velMax << std::endl;
    std::cout << "Velocidade Atual: " << this->vel << std::endl;
}