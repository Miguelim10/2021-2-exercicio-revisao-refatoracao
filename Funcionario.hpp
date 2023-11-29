#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>
//Retirada da função print_oi e do namespace std
class Funcionario {
public:
    double SalarioBase; // valor mínimo recebido pelo funcionário
    std::string IDADE;
    std::string nome;
    int rgFunc;

    void print();
};

#endif
