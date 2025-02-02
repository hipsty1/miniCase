#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
    char lanjut;
    while(true){
        cout << "lempar dadu(y/n) : "; cin >> lanjut;
        if(lanjut=='y'){
            cout << 1 + (rand() % 6) << endl;
        }else if(lanjut=='n'){
            break;
        }else{
            cout << "ketik ulang" << endl;
        }
    }
    return 0;
}