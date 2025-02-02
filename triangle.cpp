#include <iostream>
using namespace std;

int main(){
    int n;
    //input
    cout << "Selamat Datang di Program Segitiga" << endl; 
    cout << "Masukkan tinggi segitiga : "; cin >> n;

    //program & output
    //pola ke-1
    cout << "pola pertama" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //pola ke-2
    cout << "pola kedua" << endl;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //pola ke-3
    cout << "pola ketiga" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<i; j++){
            cout << "  ";
        }
        for(int k = 1; k <= n - i + 1; k++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //pola ke-4
    cout << "pola keempat" << endl;
    for(int i = 1; i <= n; i++){
        for(int k = 2; k <= n - i + 1; k++){
            cout << "  ";
        }
        for(int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //pola ke-5
    cout << "pola kelima" << endl;
    for(int i = 1; i <= n; i++){
        for(int k = 2; k <= n - i + 1; k++){
            cout << "  ";
        }
        for(int j = 1; j<= i * 2 - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    

    //pola ke-6
    cout << "pola keenam" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<i; j++){
            cout << "  ";
        }
        for(int k = 1; k <= (n - i) * 2 + 1; k++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //pola ke-7
    cout << "pola ketuju" << endl;
    for(int i = 1; i <= n; i++){
        for(int k = 2; k <= n - i + 1; k++){
            cout << "  ";
        }
        for(int j = 1; j<= i * 2 - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j<i; j++){
            cout << "  ";
        }
        for(int k = 1; k <= (n - i) * 2 + 1; k++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}