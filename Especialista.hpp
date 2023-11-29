#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"
/*
    Retirada do namespace std e adição do prefixo std onde necessário
*/

class Especialista : public Funcionario {
private:
    static double perc;  // Variável de porcentagem específica para Especialista

public:
    std::string especialidade;

    double comissao(double ValorVenda);

    void print();
};

#endif
