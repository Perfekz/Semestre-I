#include<iostream>
using namespace std;

//CALCULADORA DE IMPUESTOS
//Esta calculadora es justa. La edad de jubilación es 60.

int main(){
    int edad, propiedadm2;
    double precio, impuesto1, impuesto2;

    cout << "Calculadora de impuestos. Inserte su edad, la medida de su propiedad en m2 y el precio de su propiedad en $";
    cin >> edad >> propiedadm2 >> precio;

    impuesto1 = precio * 0.15;
    impuesto2 = precio * 0.05;

    if (edad >= 60){
        cout << "Felicidades, usted esta jubilado/a. Usted no paga impuestos.";
    }
    if (edad < 60){
        if (propiedadm2 > 150){
            cout << "Este anio usted pagara en impuestos:$"; cout << impuesto1;
        }
        else {
            cout << "Este anio usted pagara en impuestos:$"; cout << impuesto2;
        }
    }
return 0;
}