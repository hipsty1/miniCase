#include <iostream>
using namespace std;

int faktorial(int a);

int main(){
    int f;
    cout << "masukkan nilai faktorial : "; cin >> f;
    cout << "hasilnya adalah " << faktorial(f) << endl;
    return 0;
}

int faktorial(int a){
    int hasil = 1;
    if(a==1){
        return hasil;
    }else{
        return a * faktorial((a-1));
    }
}