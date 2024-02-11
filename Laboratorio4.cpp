#include <iostream>
#include <math.h>
using namespace std;


void imprimirResultado(int opc);
void menu(int opc);
float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);
int divisionAbsoluta(int num1, int num2);



int main()
{
	int opc, ope;
    cout << "Ingrese cuantas operaciones desea realizar: " << endl;
    cin >> ope;
    for (int i = 1; i<=ope; i++) {
        menu(opc);
    }
    cout << endl <<"Operaciones terminadas";
    return 0;
}

void menu(int opc) {
        system("CLS");
       	cout << "ELIGE LA FUNCION QUE DESEAS REALIZAR" << endl;
        cout << "1) Sumar" << endl;
        cout << "2) Restar" << endl;
        cout << "3) Multiplicar" << endl;
        cout << "4) Dividir" << endl;
        cout << "5) Division absoluta" << endl;
        cout << "6) Salir" << endl;
        cout << "Seleccione una operacion ";
        cin >> opc; 
        system("cls");
		imprimirResultado(opc);
}

float suma(float num1, float num2) {
	return num1 + num2;
}

float resta(float num1, float num2) {
	return num1 - num2;
}

float multiplicacion(float num1, float num2) {
	return num1 * num2;
}

float division(float num1, float num2) {
	return num1 / num2;
}

int divisionAbsoluta(int num1, int num2){
	return num1 % num2;
}

void imprimirResultado(int opc){
	float num1, num2;
	switch(opc){
		case 1:
			cout << "Ingrese el 1er numero: ";
			cin >> num1;
			cout << "Ingrese el 2do numero: ";
			cin >> num2;
			cout << "El resultado es: " << suma(num1, num2) << endl;
			break;
		case 2:
			cout << "Ingrese el 1er numero: ";
			cin >> num1;
			cout << "Ingrese el 2do numero: ";
			cin >> num2;
			cout << "El resultado es: " << resta(num1, num2) << endl;
			break;
		case 3: 
			cout << "Ingrese el 1er numero: ";
			cin >> num1;
			cout << "Ingrese el 2do numero: ";
			cin >> num2;			
			cout << "El resultado es: " << multiplicacion(num1, num2) << endl;
			break;
		case 4:
			cout << "Ingrese el 1er numero: ";
			cin >> num1;
			cout << "Ingrese el 2do numero: ";
			cin >> num2;			
			cout << "El resultado es: " << division(num1, num2) << endl;
			break;
		case 5: 
			cout << "Ingrese el 1er numero: ";
			cin >> num1;
			cout << "Ingrese el 2do numero: ";
			cin >> num2;		
			cout << "El resultado es: " << divisionAbsoluta(num1, num2) << endl;
			break;
		default:
			cout << "Opcion invalida" << endl;
	}
	system("pause");	
}
