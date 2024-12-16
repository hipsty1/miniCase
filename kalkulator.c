#include <stdio.h>

int main(){
    float x, y, hasil;
    char pilih;
    printf("\t+----------------------------+\n");
    printf("\t|PROGRAM KALKULATOR SEDERHANA|\n");
    printf("\t+----------------------------+\n");
    printf("\t|1. Penjumlahan              |\n");
    printf("\t|2. Pengurangan              |\n");
    printf("\t|3. Perkalian                |\n");
    printf("\t|4. Pembagian                |\n");
    printf("\t+----------------------------+\n");
    printf("Pilih Operasi: ");
    scanf("%c", &pilih);
    printf("Masukkan nilai pertama: ");
    scanf("%f", &x);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &y);
    switch(pilih){
        case '1':
        hasil = x + y;
        printf("Hasil: %.2f\n", hasil);
        break;
        case '2':
        hasil = x - y;
        printf("Hasil: %.2f\n", hasil);
        break;
        case '3':
        hasil = x * y;
        printf("Hasil: %.2f\n", hasil);
        break;
        case '4':
        hasil = x / y;
        printf("Hasil: %.2f\n", hasil);
        break;
        default:
        printf("Pilihan tidak tersedia.\n");
    }
    return 0;
}