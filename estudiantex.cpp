#include<iostream>
using namespace std;

int main (){
    //pida un numero x al usuario y luego imprima este patron:
    //estudiante 1
    //estudiante 2
    //...
    //estudiante x
    
int x;
int est = 0;
cout <<"inserte un numero de estudiantes: ";
cin >> x;

while (est < x){
    est = est + 1;
    cout << "Estudiante " << est << endl;
}
return 0;
}