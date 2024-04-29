#include<iostream>
using namespace std;

int main (){
    
int dia, mes, anio;
cout << "Ingrese una fecha en dia (1-31), mes (1-12) y anio (2000-2024)";
cin >> dia >> mes >> anio;

if (anio >= 2000 && anio < 2024){
    //meses 31
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10){
        if (dia == 31){
            dia = 1;
            mes = mes + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
        else if (dia >= 1 && dia < 31){
            dia = dia + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
            else {
                cout << "fecha invalida";
            }
    }
    //meses 30
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia == 30){
            dia = 1;
            mes = mes + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
        else if (dia >= 1 && dia < 30){
            dia = dia + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
            else {
                cout << "fecha invalida";
            } 
    }
    //febrero
    else if (mes == 2){
        if (dia == 28){
            dia = 1;
            mes = mes + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
        else if (dia >= 1 && dia < 28){
            dia = dia + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
            else {
                cout << "fecha invalida";
            }  
    }
    //diciembre
    else if (mes == 12){
        if (dia == 31){
            dia = 1;
            mes = 1;
            anio = anio + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
        else if (dia >= 1 && dia < 31){
            dia = dia + 1;
                cout << "El dia siguiente es: " << dia << "/" << mes << "/" << anio;
        }
            else {
                cout << "fecha invalida";
            }
    }
}
else {
    cout << "fecha invalida";
}
    return 0;
}