#include <stdio.h>

int main(){

    const double pi = 3.14;
    double jariJari, tinggi, volume;

    printf("Masukkan panjang jari-jari : ");
    scanf("%lf", &jariJari);

    printf("Masukkan tinggi tabung : ");
    scanf("%lf", &tinggi);
    
    volume = pi * jariJari * jariJari * tinggi;

    printf("%lf\n", jariJari);
    printf("%lf\n", tinggi);

    printf("Volume tabung adalah : %lf\n", volume);

    return 0;
}