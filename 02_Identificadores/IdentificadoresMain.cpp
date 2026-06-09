#include <iostream>

int main () {
    int entero = 5;
    float flotante = 3.14;
    double doble = 2.71828;
    char caracter = 'M';
    bool booleano = false;
    long enteroLargo = 1234567890;
    short enteroCorto = 32767;
    unsigned int sinSigno = 20;
    char caracterAncho = L'W';

    std::cout << "Tipos de variables en C++ con un ejemplo: \n";
    std::cout << "int: " << entero << "\n";
    std::cout << "float: " << flotante << "\n";
    std::cout << "doble: " << doble << "\n";
    std::cout << "Char: " << caracter << "\n";
    std::cout << "bool: " << booleano << "\n";
    std::cout << "long: " << enteroLargo << "\n";
    std::cout << "short: " << enteroCorto << "\n";
    std::cout << "unsingned: " << sinSigno << "\n";
    std::cout << "wchar_t: " << caracterAncho << "\n";

    return 0;
}