#include <iostream>
#include <string>
using namespace std;
    
    int main(){

    	float num1, num2, resultado;
	    string operacion;
	
	cout << "Calculadora simple. Inserte DOS numeros.";
	cin >> num1 >> num2;
	
	cout << "Que operacion desea realizar: SUMAR, RESTAR, MULTIPLICAR o DIVIDIR?";
	cin >> operacion;
	
	if (operacion == "SUMAR"){
		resultado = num1 + num2;
		cout << "El resultado es: " << resultado;
		}
		
	else if (operacion == "RESTAR"){
		resultado = num1 - num2;
		cout << "El resultado es: " << resultado;
		}
		
	else if (operacion == "MULTIPLICAR"){
		resultado = num1 * num2;
		cout << "El resultado es: " << resultado;
		}	
	else if (operacion == "DIVIDIR"){
		if (num2 != 0){
        resultado = num1 / num2;
		cout << "El resultado es: " << resultado;
        }
        else {
            cout << "No se puede dividir por cero.";
        }
    }  
    else {
        cout << "No es una opcion valida";
    }
	
    return 0;
}  