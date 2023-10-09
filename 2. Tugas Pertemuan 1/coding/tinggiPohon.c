#include <stdio.h>
#include <math.h>

int main(){
    int sudutEleveasi;
    double tinggiPengamat, jarak, tinggiPohon;

    printf("Masukkan jarak dalam meter : ");
    scanf("%lf", &jarak);

    printf("Masukkan tinggi pengamat dalam meter: ");
    scanf("%lf", &tinggiPengamat);

    printf("Masukan sudut elevasi dalam derajat : ");
    scanf("%d", &sudutEleveasi);

    tinggiPohon = tanh(sudutEleveasi) * jarak + tinggiPengamat; // err

    printf("Tinggi pohon adalah : %lf meter", tinggiPohon);

    return 0;
}