/*
    namaTugas       : tugas ke 3 Algoritma Pemrograman 
    namaProgrammer  : M. Ilham (23343008)
    kasusProgram    : mengetahui tahun kabisat
*/

#include <iostream>
using namespace std;

int main(){

    int tahun;
    cout << "Masukkan tahun lahir anda : ";
    cin >> tahun;

    // Tahun habis dibagi 4 dan tidak habis dibagi 100.
    // Tahun habis dibagi 400.
    string hasil = (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0) ? "Tahun kabisat" : "Bukan tahun kabisat";
    cout << hasil << endl;

    return 0;
}