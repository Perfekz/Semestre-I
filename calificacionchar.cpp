#include<iostream>
using namespace std;

int main(){

float nota;
char letra;
cout << "Escriba su nota en numero: ";
cin >> nota;

if (nota >= 91 && nota <= 100){
	letra = 'A';
}
else if (nota >= 81 && nota < 91){
	letra = 'B';
}
else if (nota >= 71 && nota < 81){
	letra = 'C';
}
else if (nota >= 61 && nota < 71){
	letra = 'D';
}
else if (nota >= 0 && nota < 61){
	letra = 'F';
}
else {
	letra = 'N';
}

cout << "Su calificacion es: " << letra;

return 0;
}