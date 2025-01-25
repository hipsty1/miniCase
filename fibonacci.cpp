#include <iostream>
using namespace std;

int main(){
    int n, f0, f1, fn;

    //input
    cout << "Selamat Datang di Program Deret Fibonacci" << endl;
    cout << "Masukkan deret ke-n : "; cin >> n;

    //program & output
    f0 = 0;
    f1 = 1;
    cout << "suku ke-" << f0 << " adalah " << f0 << endl;
    cout << "suku ke-" << f1 << " adalah " << f1 << endl;
    for (int i=1; i<n; i++){
        fn = f1 + f0;
        cout << "suku ke-" << (i+1) << " adalah " << fn << endl; 
        f0 = f1;
        f1 = fn;
    }
    return 0;
}