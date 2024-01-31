#include <iostream>
using namespace std;
float numero1, numero2;
float resultado;
float suma(float numero1, float numero2);
float resta(float numero1, float numero2);
float multiplicacion(float numero1, float numero2);
float division(float numero1, float numero2);
int main()
{
    cout << "Ingrese el primer numero: " << endl;
    cin >> numero1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> numero2;
    cout << "El resultado de la suma es: " << suma(numero1, numero2) << endl;
    cout << "El resultado de la resta es: " << resta(numero1, numero2) << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion(numero1, numero2) << endl;
    cout << "El resultado de la division es: " << division(numero1, numero2) << endl;
    return 0;
}
float suma(float numero1, float numero2){
    resultado = numero1 + numero2;
    return resultado;
}

float resta(float numero1, float numero2){
     resultado = numero1 - numero2;
    return resultado;
}

float multiplicacion(float numero1, float numero2){
     resultado = numero1 * numero2;
    return resultado;
}

float division(float numero1, float numero2){
    resultado = numero1 / numero2;
    return resultado;
}