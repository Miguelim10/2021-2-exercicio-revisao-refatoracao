#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <string>

/*
    Retirada do namespace e da variável global
*/
class Gerente {
private:
    static double ValorBONIFICACAO;  // Variável de bonificação específica para Gerente

public:
    double SalarioBase; // valor mínimo recebido pelo funcionário
    std::string IDADE;
    std::string nome;
    int rgFunc;
    double bonificacao;

    void print();

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
};

#endif
