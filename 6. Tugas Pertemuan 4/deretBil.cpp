/*
    namaTugas: Tugas ke 4 ALgoritma Pemrograman
    namaProgrammer: M.ilham(23343008)
    kasusProgram: menampilkan deret bilangan suku ke n
*/

#include <iostream>

using namespace std;


int main(){

    int suku, hasil = 1;
    cout << "Masukkan suku yang di inginkan : ";
    cin >> suku;
    
    cout << "Deret bilangan suku ke-" << suku << " adalah : ";
    for(int i = 1; i <= suku; i++){
        cout << hasil << " ";
        hasil *= 2;
    }
    cout << endl;



    return 0;
}