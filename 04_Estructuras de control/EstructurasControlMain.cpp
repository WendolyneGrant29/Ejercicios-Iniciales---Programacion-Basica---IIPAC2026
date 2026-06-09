#include <iostream>
#include <string>

using namespace std;

int main() {
    char claseoperacion;
    double num1, num2, resultado;
cout<<"Ingrese la clase de operacion que desea realizar "<<endl;
cout<<"a Suma"<<endl;
cout<<"b Resta"<<endl;
cout<<"c Multiplicacion"<<endl;
cout<<"d Division"<<endl;
cin>>claseoperacion;
cout<<"Ingrese el primer numero "<<endl;
cin>>num1;
cout<<"Ingrese el segundo numero "<<endl;
cin>>num2;

switch (claseoperacion) {
    case 'a':
        resultado = num1 + num2;
        cout<<"El resultado de la suma es "<<resultado<<endl;
        break;
    case 'b':
        resultado = num1 - num2;
        cout<<"El resultado de la resta es "<<resultado<<endl;
        break;
    case 'c':
        resultado = num1 * num2;
        cout<<"El resultado de la multiplicacion es "<<resultado<<endl;
        break;
    case 'd':
        if (num2 == 0) {
            cout<<"Error: No se puede dividir por cero."<<endl;
        }
        else {
            resultado = num1 / num2;
            cout<<"El resultado de la division es "<<resultado<<endl;
        }
        break;
    default:
        cout<<"Opcion no valida."<<endl;
}
    return 0;
}