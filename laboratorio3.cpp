#include <iostream>
#include <math.h>

using namespace std;
float numero1, numero2;
float resultado;
void operaciones();
void calcularPotencia();
bool esPrimo(int numero);
bool esBisiesto(int anio);
float suma(float numero1, float numero2);
float resta(float numero1, float numero2);
float multiplicacion(float numero1, float numero2);
float division(float numero1, float numero2);
int main()
{
    int opc;
    while (opc <= 5)
{
    system("cls"); 
    cout << "ELIGE LA FUNCION QUE DESEAS REALIZAR" << endl;
    cout << "1) Realizar las operaciones aritmeticas basicas" << endl;
    cout << "2) Ralizar una potenciacion" << endl;
    cout << "3) Comprobar si un numero es primo o no" << endl;
    cout << "4) Comprobar si un anio es bisiesto" << endl;
    cout << "5) Salir" << endl;
    cin >> opc;
   switch (opc)
    {
    case (1):
        operaciones();
        system("pause");
        break;
    case (2):
        calcularPotencia();
        system("pause");
        break;
    case (3):
        int numero;
        cout << "Introduzca un numero: ";
        cin >> numero;
        if (esPrimo(numero)){
        cout << "El numero " << numero << " es primo." << endl;
        } else {
        cout << "El numero " << numero << " no es primo." << endl;
        }
        system("pause");
        break;
    case (4): 
        int anio;
        cout << "Introduzca el anio: ";
        cin >> anio;
        if (esBisiesto(anio)) {
            cout << anio << " es un anio bisiesto." << endl;
            }
        else {
            cout << anio << " no es un anio bisiesto." << endl;
        }
        system("pause");
        break;
    case (5):
        system("pause");
        return 0;
        break;
        break;
    default:
        break;
    }
}
    
    system("pause");
    return 0;
}

float suma(float numero1, float numero2) {
    resultado = numero1 + numero2;
    return resultado;
}

float resta(float numero1, float numero2) {
    resultado = numero1 - numero2;
    return resultado;
}

float multiplicacion(float numero1, float numero2) {
    resultado = numero1 * numero2;
    return resultado;
}

float division(float numero1, float numero2) {
    if (numero2 != 0) {
        resultado = numero1 / numero2;
    }
    else {
        cout << "un numero por el que sea valido dividir" << endl;
        system("pause");
        system("cls");
        main();
    }
    return resultado;
}

void operaciones(){
    system("cls");
    int numero1, numero2;
    cout << "Ingrese el primer numero: " << endl;
    cin >> numero1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> numero2;
    cout << "El resultado de la suma es: " << suma(numero1, numero2) << endl;
    cout << "El resultado de la resta es: " << resta(numero1, numero2) << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion(numero1, numero2) << endl;
    cout << "El resultado de la division es: " << division(numero1, numero2) << endl;
    if (numero1 == numero2) {
        cout << "Los numeros son iguales" << endl;
    }
    else {
        cout << "Los numeros son Distintos" << endl;
    }
    system("pause");
    system("cls");
}

void calcularPotencia() {
    int base, exponente;
    float resultado;
    cout << "Ingrese la base: " << endl;
    cin >> base;
    cout << "Ingrese el exponente: " << endl;
    cin >> exponente;
    if (exponente == 0) {
        resultado = 1;
    }
    else {
       resultado = pow(base, exponente);
    }
    cout << "El resultado de la potenciacion es: " << resultado << endl;
}

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
    if (numero % i == 0) {
      return false;
        }
    }
    return true;
}
bool esBisiesto(int anio){
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return true;
        }
        else {
        return false;
        }
}