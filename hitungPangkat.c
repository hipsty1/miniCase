#include <stdio.h>

void judul();
int pangkat();

int main(){
    int n, h, p;
    judul();
    printf("Masukkan nilai: "); scanf("%d", &n);
    printf("Masukkan pangkat: "); scanf("%d", &p);
    h = pangkat(n,p);
    printf("hasil : %d", h);
    return 0;
}

void judul(){
    printf("PROGRAM PERPANGATAN\n\n");
}

int pangkat(int x, int y){
    int i, a;
    a=x;
    for(i=1; i<y; i++){
        a *= x;
    }
    return a;
}