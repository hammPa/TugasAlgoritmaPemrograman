#include <iostream>

using namespace std;

void input(int *awal, int *akhir){
    cout << "Masukkan bilangan awal : ";
    cin >> *awal;
    cout << "Masukkan bilangan akhir : ";
    cin >> *akhir;
}

void proses(int awal, int akhir, int hasil[], int *counterArr){ 
    int bil;
    for(int i = awal; i <= akhir; i++){
        bil = 0;
        for(int j = 1; j <= i; j++){
            if(i%j==0){
                bil++;
            }
        }
        if(bil==2){
            hasil[*counterArr] = i;
            (*counterArr)++;
        }
    }
}

void displayHasil(int awal, int akhir, int hasil[], int counterArr){
    cout << "Bilangan prima dari angka " << awal << " hingga " << akhir;
    cout << " adalah : ";
    for(int i = 0; i < counterArr; i++){
        cout << hasil[i] << " ";
    }
    cout << endl;
}

int main(){

    // syarat prima : dibagi 1 dan bilangan itu sendiri

    int awal, akhir, counterArr = 0;
    int hasil[100];
    input(&awal, &akhir);

    proses(awal, akhir, hasil, &counterArr);

    displayHasil(awal, akhir, hasil, counterArr);
    
    return 0;
}