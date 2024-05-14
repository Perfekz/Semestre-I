#include<iostream>
using namespace std;

int main (){

int Hora;
cout << "Escriba una hora en formato militar (24 H): ";
cin >> Hora;
if (Hora == 0 || Hora <= 11 || Hora == 24){
    if (Hora == 0 || Hora == 24){
        Hora = 12;
    }
    else{
        //no pasa nada
    }
    cout << Hora << " a.m.";
}
else if (Hora >= 12 && Hora <= 23){
    if (Hora > 12 && Hora <= 23){
        Hora = Hora - 12;
    }
    else{
        //no pasa nada
    }
    cout << Hora << " p.m.";
}
else{
    cout << "Error";
}
return 0;
}