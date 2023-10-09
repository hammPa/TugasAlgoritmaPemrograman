/*
    namaTugas: Tugas ke 4
    namaProgrammer: hammWithoutAi
    kasusProgram: menghitung nilai faktorial ke n
*/

#include <iostream>

using namespace std;


int main(){

    int nilai, hasil = 1;
    cout << "Masukkan nilai faktorial : ";
    cin >> nilai;
    
    if(nilai==0){
        cout << "Hasil dari 0! adalah 1" << endl;
        return 0;
    }

    cout << "Hasil dari " << nilai << "!, ";
    for(nilai; nilai > 0; nilai--){
        hasil *= nilai;
        cout << nilai;
        if (nilai > 1) {
            cout << " x ";
        }
    }

    cout << " adalah " << hasil << endl;



    return 0;
}