#include <iostream>
using namespace std;

int fibonacci(int a);

int main (){
    int fibo;
    cout << "masukkan angka : "; cin >> fibo;
    cout << "hasil deret fibonacci angka di atas adalah " << fibonacci(fibo) << endl;
    return 0;
}

int fibonacci(int a){
    int sn0 = 0, sn1 = 1;
    if(a==0){
        return sn0;
    }else if(a==1){
        return sn0 + sn1;
    }else {
        return fibonacci(a-1) + fibonacci(a-2);
    }
}