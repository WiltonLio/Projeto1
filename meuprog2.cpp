#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    float a, b;
    
    std::cout << "Digite o valor de A: ";
    std::cin  >> a;
    
    std::cout << "Digite o valor de B: ";
    std::cin  >> b;
    
    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;
    float divisao = b != 0 ? a / b : 0;
    float resto = b != 0 ? std::fmod(a, b) : 0;
    //double divisao = a / (b+1.0);
    //double divisao = b != 0 ? static_cast<double>(a) / b : 0;
    //float resto = b != 0 ? a % b : 0;
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Subtração: " << subtracao << std::endl;
    std::cout << "Multiplicação: " << multiplicacao << std::endl;
    std::cout << "Divisão: " << divisao << std::endl;
    std::cout << "Resto da divisão: " << resto << std::endl;

    system("pause");
    
    return 0;
}
