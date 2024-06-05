#include<iostream>
using namespace std;

int main (){
    int x = 0;

    while (x >= 0){
        cout <<"Hola ";
        if(x % 2 == 0){
            cout << "buen dia" << endl;
        }
        else {
            cout << "que hace" << endl;
        }
        x = x + 1;
    }
    return 0;
}