#include <stdio.h>


int main(){

    const double pi = 3.14;
    double luas;
    double jariJari;

    printf("Masukkan panjang jari-jari : ");
    scanf("%lf", &jariJari);

    luas = pi * jariJari * jariJari;
    printf("Luas lingkaran : %lf\n", luas);    
    
    
    return 0;
}