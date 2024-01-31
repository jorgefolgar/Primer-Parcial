#include <iostream>
using namespace std;
int opc;

int main()
{
    
while (opc <= 6)
{
    system("cls"); 
    cout << "ELIGE LA FUNCION QUE DESEAS REALIZAR" << endl;
    cout << "1) Verificar si un numero es par" << endl;
    cout << "2) Verificar si un anio es bisiesto" << endl;
    cout << "3) Determinar si 2 numeros son iguales" << endl;
    cout << "4) Verificar si una personas es mayor de edad" << endl;
    cout << "5) Verificar si una persona aprobo un examen" << endl;
    cout << "6) Salir" << endl;
    cin >> opc;
   switch (opc)
    {
    case (1):
        int numero;
        cout << "Ingrese el numero que desea saber si es par o no" << endl;
        cin >> numero;
        if (numero % 2 == 0) {
            cout << "El numero que ha ingresado (" << numero << ") es par" << endl;
        }
        else {
            cout << "El numero que ha ingresado (" << numero << ") NO es par" << endl;
        }  
        system("pause");
        break;
    case (2):
        int anio;
        cout << "Ingrese el anio" << endl;
        cin >> anio;
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un anio bisiesto." << endl;
        }
        else {
        cout << anio << " no es un anio bisiesto." << endl;
        }
        system("pause");
        break;

    case (3):
        int numero1;
        int numero2;
        cout << "Ingrese el primer numero" << endl;
        cin >> numero1;
        cout << "Ingrese el segundo numero" << endl;
        cin >> numero2;
        if (numero1 == numero2)
        {
            cout << "Los numeros son iguales" << endl;
        }
        else {
            cout << "Los numeros NO son iguales" << endl;
        }
        system("pause");
        break;

    case (4):
        int edad;
        cout << "Ingrese su edad" << endl;
        cin >> edad;
        if (edad >= 18)
        {
            cout << "Es una persona mayor de edad" << endl;
        }
        else {
            cout << "No es una persona mayor de edad" << endl;
        }
        system("pause");
        break;
    
    case (5):
        int nota;
        cout << "Ingrese la nota del estudiante" << endl;
        cin >> nota;
        if (nota >= 60)
        {
            cout << "El estudiante aprobo la materia" << endl;
        }
        else {
            cout << "El estudiante NO aprobo la materia" << endl;
        }
        system("pause");
        break;
    
    case (6):
        system("pause");
        return 0;
        break;
    
    default:
        break;
    }
}
    system("pause");
    return 0;
}
