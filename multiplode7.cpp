#include<iostream>
using namespace std;

int main(){
    int x;
    x = 1;
    while (x <= 100){
	    if (x % 7 == 0){
	    cout << x << endl;
	    }
    x = x + 1;
    }
return 0;
}