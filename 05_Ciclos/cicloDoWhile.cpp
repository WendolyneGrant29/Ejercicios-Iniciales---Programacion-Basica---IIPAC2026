#include <iostream>
using namespace std;

/*REALIZAR UN PROGRAMA que solicite un valor inicial y un valor final y
 muestre los valores entre ellos utilizando un cliclo while*/
int main() {
    int inicio, final;
    cout << "Ingrese el valor inicial: ";
    cin >> inicio;
    cout << "Ingrese el valor final: ";
    cin >> final;

    //validar que sean datos diferentes
    while (inicio == final)
    {
        cout << "ERROR: El valor inicial y el valor final deben ser diferentes ";
        cout << "Ingrese el valor inicial: ";
        cin >> inicio;
        cout << "Ingrese el valor final: ";
        cin >> final;
    }
    //Ascendentes

    int diferencia = 0;
    if (inicio < final)
    {
        diferencia = final - inicio; //Calcular la diferencia
        if (diferencia == 1){ //Si la diferencia es 1, no se puede mostrar la secuencia
        cout << "No se pude mostrar la secuencia cuando la diferencia es 1 " << endl;
        }
        else {//Si la diferencia es mayor a 1, se muestra la secuencia
           cout << "La diferencia entre el valor inicial y el valor final es: " << diferencia << endl;  
        while (inicio <= final)
            {
                cout << inicio << " ";
                inicio = inicio + 1; // Incrementamos el valor inicial en 1 para mostrar el siguiente valor
            }
        }
    }
    //Descendentes
    else 
    {
        if (inicio > final)
        {
            diferencia = inicio - final;//Calcular la diferencia
            if (diferencia == 1){//Si la diferencia es 1, no se puede mostrar la secuencia
                cout << "No se pude mostrar la secuencia cuando la diferencia es 1 " << endl;
            }
            else {//Si la diferencia es mayor a 1, se muestra la secuencia
            cout << "La diferencia entre el valor inicial y el valor final es: " << diferencia << endl;
        while (inicio >= final)
            {
                cout << inicio << " ";
                inicio = inicio - 1; // Decrementamos el valor inicial en 1 para mostrar el siguiente valor
            }
        }
    }
    
    
        return 0;
    }
}
