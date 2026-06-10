//ejemplo de una función pasando un parámetro por valor

#include <iostream>

using namespace std;

void multiplicarPorDos(int numero) {
	numero *= 2; // Multiplica el número por 2
	cout << "Dentro de la función: " << numero << "\n";
}


int main(int argc, char *argv[]) {
	
	int valor = 5;
	
	cout << "Antes de llamar a la función: " << valor << "\n";
	
	// Llamada a la función con un parámetro por valor
	multiplicarPorDos(valor);
	
	cout << "Después de llamar a la función: " << valor << "\n";
	
	return 0;
}