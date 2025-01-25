#include <stdio.h>

int faktorial(int x){
    if(x<=1){
        return x;
    }else {
        return x * faktorial((x-1));
    }
}

int main(){
    int nilai;
    printf("Masukkan nilai : "); scanf("%d", &nilai);
    printf("Nilai Faktorial : %d", faktorial(nilai));
    return 0;
}