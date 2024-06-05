#include<iostream>
using namespace std;

int main (){

double prom, nota, cont;
prom = 0;
cont = 0;

while (cont < 5){
    cout << "Inserte cinco (5) notas: ";
    cin >> nota;
	prom = prom + nota;
	cont = cont + 1;
	}

prom = prom / 5;

cout << "el promedio es: " << prom;

return 0;
}