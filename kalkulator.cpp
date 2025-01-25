#include <iostream>
using namespace std;

int main(){
    float a, b, hasil;
    char aritmatika;
    bool c;

    //input
    cout << "Selamat datang di program kalkulator C++" << endl << endl;
    cout << "Masukkan angka pertama : "; cin >> a;
    cout << "Masukkan operator (+/-/:/x) : "; cin >> aritmatika;
    cout << "Masukkan angka kedua : "; cin >> b;

    //pengondisian
    switch(aritmatika){
        case '+':
            hasil = a + b;
            c = true;
            break;
        case '-':
            hasil = a - b;
            c = true;
            break;
        case ':':
            hasil = a / b;
            c = true;
            break;
        case 'x':
            hasil = a * b;
            c = true;
            break;
        default:
            cout << "Maaf operator salah" << endl;
    }

    //output
    if(c==true){
        cout << a << aritmatika << b << " = " << hasil;
    }
}