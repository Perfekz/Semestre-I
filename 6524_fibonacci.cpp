#include<iostream>
using namespace std;

int main (){
int a, b, c, x, y;
a = 1;
b = 1;
y = 0;

cout << "Inserte un numero: ";
cin >> x;

    while (y < x){
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;

    y = y + 1;
    }
return 0;
}