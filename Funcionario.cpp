#include <iostream>
#include <iomanip>
#include "Especialista.hpp"

double Especialista::perc = 0.1;  // Inicialização da variável de porcentagem

double Especialista::comissao(double ValorVenda) {
    return ValorVenda * perc;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
    std::cout << "  Nome: " << nome << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
}
