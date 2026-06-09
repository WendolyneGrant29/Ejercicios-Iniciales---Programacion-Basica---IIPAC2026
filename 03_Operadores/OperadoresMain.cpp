#include <iostream>
int main() {
    int a, b;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    int suma = a + b;
    std::cout << "La suma es " << suma << std::endl;

    return 0;
}