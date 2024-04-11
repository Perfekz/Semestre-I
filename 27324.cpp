#include<iostream>
using namespace std;
    
int main(){
    int d_nacimiento, m_nacimiento, a_nacimiento, d_actual, m_actual, a_actual, edad;
    a_actual = 2024;
    m_actual = 3;
    d_actual = 27;

    cout << "Escriba su fecha de nacimiento (dia, mes, anio): ";
    cin >> d_nacimiento >> m_nacimiento >> a_nacimiento;

    edad = a_actual - a_nacimiento;

    if(m_nacimiento < m_actual){
        //no pasa nada, edad correcta
    }
    else if(m_nacimiento == m_actual){
        if(d_nacimiento > d_actual){
            edad = edad - 1;
            }
        else if(d_nacimiento <= d_actual){
           //no pasa nada, edad correcta 
        }
    }
    else (m_nacimiento > m_actual);{
        edad = edad - 1;
    }
    
    cout << "Su edad es: " << edad;

    return 0;
}