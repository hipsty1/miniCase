#include <iostream>
using namespace std;

//fungsi keliling
int keliling(int a, int b){
    return 2 * (a + b);
}

//fungsi luas
int luas(int a, int b){
    return a * b;
}

int main(){
    int x, y;
    cout << "Masukkan panjang dari persegi panjang : "; cin >> x;
    cout << "Masukkan lebar dari persegi panjang : "; cin >> y;
    cout << "Berikut adalah hasillnya" << endl;
    cout << "Keliling = " << keliling(x,y) << endl;
    cout << "Keliling = " << luas(x,y) << endl;
    return 0;
}