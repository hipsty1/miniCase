#include <stdio.h>

int main(){
    int x,m,i;
    start:
    printf("Program bilangan prima\n");
    printf("Masukkan angka : "); scanf("%d",&x);
    m=0;
    for(i=1;i<=x;i++){
        if(x % i == 0) m++;
    }
    if(m == 2){
        printf("angka %d adalah bilangan prima", x);
    }else{
        printf("angka %d bukan bilangan prima", x);
    }
    printf("\n\n");
    goto start;
}