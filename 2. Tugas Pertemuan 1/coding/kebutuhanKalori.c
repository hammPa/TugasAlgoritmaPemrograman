#include <stdio.h>




int main(){

    double kebutuhanKalori, tinggiBadan, beratBadan;
    int usia, jenisKelamin, aktivitasFisik;

    printf("Masukkan tinggi badan (dalam meter) : ");
    // fflush(stdin);
    scanf("%lf", &tinggiBadan);
    printf("Masukkan berat badan (dalam kilogram) : ");
    // fflush(stdin);
    scanf("%lf", &beratBadan);

    printf("Masukkan umur : ");
    // fflush(stdin);
    scanf("%d", &usia);

    printf("Masukkan jenis kelamin (1. laki-laki, 2. perempuan) : ");
    fflush(stdin);
    scanf("%d", &jenisKelamin);



    if(jenisKelamin==1){
        kebutuhanKalori = 66 + (13.7 * beratBadan) + (5 * tinggiBadan) - (6.8 * usia);
    }
    else {
        kebutuhanKalori = 655 + (9.6 * beratBadan) + (1.8 * tinggiBadan) - (4.7 * usia);
    }
    printf("Masukkan tingkat aktivitas fisik (1. ringan, 2. sedang, 3. berat) : ");
    fflush(stdin);
    scanf("%d", &aktivitasFisik);


    if(aktivitasFisik==1){
        kebutuhanKalori *= 1.2;
    }
    else if(aktivitasFisik==2){
        kebutuhanKalori *= 1.55;
    }
    else {
        kebutuhanKalori *= 1.9;
    }
    printf("Kebutuhan Kalori : %lf", kebutuhanKalori);
    return 0;
}