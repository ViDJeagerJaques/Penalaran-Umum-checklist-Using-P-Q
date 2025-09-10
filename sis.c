#include <stdio.h>
int main () {
    char a, b, opr;
    int A, B, Hasil;

    printf("=== Program Tabel kebenaran menggunakan huruf p/q (seperti Penalaran Umum)");
    printf("== Masukkan huruf 'x' untuk keluar dari program ==\n");
    
    printf ("Masukkan pernyataan pertama (p/q)\n");
    scanf(" %c", &a);
    printf ("Masukkan pernyataan kedua (p/q)\n");
    scanf(" %c", &b);

    printf("Masukkan operator logika (&=AND, ||=OR, !=NOT, x= untuk keluar) :\n");
    scanf(" %c", &opr);

    A = (a == 'p') ? 1 : 0;
    B = (b == 'p') ? 1 : 0;

    if (opr == 'x'){
        Hasil = A && B;
        printf("Hasil dari %c AND %c adalah : ")
    }

    

}
