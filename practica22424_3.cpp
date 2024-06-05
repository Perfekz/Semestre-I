#include<iostream>
using namespace std;

//práctica 3

int main(){
    int x = 3, y = 0, resp;

while (y <= 12){
    resp = x * y;
    cout << x << " x " << y << " = " << resp << endl;
    y = y + 1;
}
return 0;
}