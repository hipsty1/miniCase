#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 11> nilai;
    // input nilai
    cout << "Input Nilai Mahasiswa" << endl;
    for(int i = 0; i < nilai.size(); i++){
        if(i == 10) {
            cout << "Jumlah Mahasiswa dengan nilai 100      : "; cin >> nilai[i];
        } else if (i == 0 ) {
            cout << "Jumlah Mahasiswa dengan nilai 00 sd 09 : "; cin >> nilai[i];
        } else {
            cout << "Jumlah Mahasiswa dengan nilai " << i*10 << " sd " << i*10+9 << " : "; cin >> nilai[i];
        }
    }
    // output nilai
    cout << endl;
    cout << "Tampilan Grafik Nilai Mahasiswa" << endl;
    for(int i = 0; i < nilai.size(); i++){
        if(i == 10) cout << "Jumlah Mahasiswa dengan nilai 100      : ";
        else if (i == 0 ) cout << "Jumlah Mahasiswa dengan nilai 00 sd 09 : ";
        else cout << "Jumlah Mahasiswa dengan nilai " << i*10 << " sd " << i*10+9 << " : ";
        for(int j=0; j < nilai[i]; j++) cout << "*";
        cout << endl;
    }
    return 0;
}