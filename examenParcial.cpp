#include <iostream>
#include <math.h>
using namespace std;

void operaciones();
void sumatoria();
bool esPrimo(int n);
void raiz();

int main()
{
    int opc;
     while (opc!=5) { 
    cout << "Este codigo contiene todos los programas indicados en la variable, por lo que debe elegir que codigo o inciso desea ejecutar" << endl;
    cout << "OPCION 1 Ejercicio 1: Realizacion de las operaciones aritmeticas basicas" << endl;
    cout << "OPCION 2 Ejercicio 2: Realizar una sumatoria de numeros hasta un numero n" << endl;
    cout << "OPCION 3 Ejercicio 3: Comprobar si un numero es primo" << endl;
    cout << "OPCION 4 Ejercicio 4: Calcular raiz cuadrada" << endl;
    cout << "OPCION 5 Salir del programa" << endl;
    cout << "Ingrese la opcion: ";
    cin >> opc;
    switch (opc)
    {
    case 1: {
        system("cls");
        operaciones();
        system("PAUSE");
        system("cls");
        break;
    }
    case 2: {
        system("cls");
        sumatoria();
        system("PAUSE");
        system("cls");
        break;
    }
    case 3: {
        system("cls");
        int n;
        cout << "Ingrese que numero desea comprobar si es primo o no: ";
        cin >> n;
        if (esPrimo(n)){
        cout << "El numero " << n << " es primo." << endl;
        } else {
        cout << "El numero " << n << " no es primo." << endl;
        }
        system("PAUSE");
        system("cls");
        break;
    }
    case 4: {
        system("cls");
        raiz();
        system("PAUSE");
        system("cls");
        break;
    }
    case 5: {
        break;
    }
    default:
        break;
    }
    system("pause");
    }
    return 0;
}

void operaciones() {
    int a, b;
    cout << "Ingrese el primer numero" << endl;
    cin >> a;
    cout  << "Ingrese el segundo numero" << endl;
    cin >> b;
    cout << "Que funcion desea  realizar?" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout  << "4. Division" << endl;
    cout  << "5. Salir del programa " << endl;
    cout  << "Ingrese la opcion: ";
    int opc = 0;
    cin >> opc;
    switch (opc)
    {
    case 1: {
        int resultado;
        resultado= a + b;
        cout  << "La suma de "<< a << " y " << b << " es: " << resultado <<endl;
        break;
    }
    case 2: {
        int resultado;
        resultado  = a - b;
        cout  << "La resta de "<< a << "y" << b << "es" << resultado << endl;
        break;
    }
    case 3: {
        int resultado;
        resultado = a * b;
        cout  << "La multiplicacion de "<< a << "x" << b << "es:" <<resultado<<endl;
        break;
    }
    case 4: {
        float resultado;
        if (b = 0) {
            cout  << "No se puede dividir entre cero";
            break;
        }
        else {
            resultado = a / b;
            cout  << "La division de " << a << "/" << b << "es :" << resultado << endl;
            break;
        }
    }
    default:
        break;
    }
}

void sumatoria() {
    int num, suma;
    suma = 0;
    cout  << "Ingrese el numero hasta el que desea ralizar la sumatoria" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        suma = i + suma;
    }
    cout <<  "La sumatoria es: " << suma << endl;
    return;
}

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
        }
    }
    return true;
}

void raiz() {
    float raiz;
    int n;
    cout << "De que numero desea calcular la raiz cuadrada? " << endl;
    cin >> n;
    raiz = sqrt(n);
    cout << "La raiz cuadrada de " << n << " es: " << raiz << endl;
    system("pause");
    return;
}