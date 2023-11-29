#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"
#include <string>

class Venda {
public:
    double VALOR;
    std::string descricao;
    Especialista esp;  // Usando a classe Especialista
    std::string cliente;

    void print();
};

#endif
