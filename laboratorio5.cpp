#include <iostream>
using namespace std;
void menu();
int sumaNumeros();
void resultados(int opc);
void factorial();
void contador();
void ordernarNumeros();
void sumarDigitos();

int opc;

int main()
{
    menu();
    system("pause");
    return 0;
}

void menu() {
        system("cls");
        while (opc <= 5) {
        system("cls");
       	cout << "ELIGE LA FUNCION QUE DESEAS REALIZAR" << endl;
        cout << "1) Suma de numeros pares e impares desde un numero x" << endl;
        cout << "2) Factorial de un numero" << endl;
        cout << "3) Contador de digitos" << endl;
        cout << "4) Ordenamiento de numeros (ascendente)" << endl;
        cout << "5) Suma de digitos de un numero" << endl;
        cout << "6) Salir" << endl;
        cout << "Seleccione una operacion ";
        cin >> opc; 
        system("cls");
        switch(opc){
		case 1:
			sumaNumeros();
			system("pause");
			break;
		case 2:
			factorial();
			system("pause");
			break;
		case 3: 
			contador();
            system("pause");
			break;
		case 4:
			ordernarNumeros();
            system("pause");
			break;
		case 5: 
			sumarDigitos();
            system("pause");
			break;
		case 6: 
			break;
            system("pause");
            return;
		default:
			cout << "Opcion invalida" << endl;
	        }	
        }
    }

int sumaNumeros() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    char opcion;
    cout << "Desea sumar los numeros pares (P) o impares (I)? ";
    cin >> opcion;
    bool esPar = (opcion == 'p' || opcion == 'P');
    int suma = 0;
    for (int i = 1; i <= numero; ++i) {
        if ((i % 2 == 0 && esPar) || (i % 2 != 0 && !esPar)) {
            suma += i;
        }
    }
    if (esPar) {
        cout << "La suma de los numeros pares hasta " << numero << " es: " << suma << endl;
    } else {
        cout << "La suma de los numeros impares hasta " << numero << " es: " << suma << endl;
    }   
    return 0;
}

void factorial() {
    int numero;
    int i = 2;
    int resultado = 1;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    if (numero < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
        return;
    }
    if (numero == 0 || numero == 1) {
        cout << "El factorial de " << numero << " Es " << resultado << endl;
        return;
    }
    while (i <= numero) {
        resultado = resultado * i;
        i++;
    }
    cout << "El factorial de " << numero << " es " << resultado <<  endl;
    return;
}

void contador() {
    int numero, contador;
    contador = 0;
    cout << "Ingrese el numero al que desea contarle sus digitos" <<  endl;
    cin >> numero;
    if (numero < 0) {
        numero = -numero; 
    }

    if (numero == 0) {
        cout << "El numero cuenta con 1 digito" <<  endl;
        return;
    }
    do {    
        numero /= 10;
        contador++;
    } while (numero != 0); 
     cout << "El numero cuenta con: " << contador << " digito(s)" << endl;
}

void ordernarNumeros() {
    int a, b, c;
    cout << "Ingrese los numeros que desea ordenar de manera ASCENDENTE" <<  endl;
    cout << "Numero 1: ";
    cin >> a;
    cout << endl <<  "Numero 2: ";
    cin >> b;
    cout << endl <<  "Numero 3: ";
    cin >> c;
    cout << endl;
   if (a <= b and b <= c)
		cout << "El orden de los numeros es: " << a << ", " << b << ", " << c <<  endl; 
	else if (a <= c and c <= b)
		cout << "El orden de los numeros es: " << a << ", " << c << ", " << b <<  endl;
	else if (b <= a and a <= c)
		cout << "El orden de los numeros es: " << b << ", " << a << ", " << c <<  endl;
	else if (b <= c and c <= a)
		cout << "El orden de los numeros es: " << b << ", " << c << ", " << a <<  endl;
	else if (c <= a and a <= b)
		cout << "El orden de los numeros es: " << c << ", " << a << ", " << b <<  endl;
	else if (c <= b and b <= a)
		cout << "El orden de los numeros es: " << c << ", " << b << ", " << a <<  endl;
}

void sumarDigitos() {
    int numero;
    int suma = 0;
    cout << "Ingrese el numero al que desea sumar sus digitos" << endl;
    cin >> numero;
    int numeroOriginal = numero; 
    if (numero < 0) {
        numero = -numero;
    }
    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }
    cout << "La suma de los digitos de " << numeroOriginal << " es: " << suma << endl;
}