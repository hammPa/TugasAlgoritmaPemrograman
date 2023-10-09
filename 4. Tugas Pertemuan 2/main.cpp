/*
    namaTugas       : tugas ke 2 Algoritma Pemrograman 
    namaProgrammer  : M. Ilham (23343008)
    kasusProgram    : menghitung kecepatan suatu kendaraan berdasarkan jarak dan waktu tempuh
*/

#include <iostream>
using namespace std;

int main(){
    
    short pilihan;
    float jarak, waktu, kecepatan;


    cout << "\tSelamat datang di program menghitung kecepatan kendaraan";
    cout << "berdasarkan jarak dan waktu tempuh\n\n\n";

    cout << "\tPertama, mari putuskan anda akan menggunakan satuan : \n";
    cout << "\t1. kilometer/jam (km/h)\n\t2. meter/detik (m/s)\n";
    cout << "\tMasukkan pilihan anda (dalam angka) : ";
    cin >> pilihan;

    cout << "\n\tBaiklah sekarang masukkan data jarak dan waktunya\n";
    
    if(pilihan==1){
        cout << "\tMasukkan jarak yang anda tempuh (dalam km): ";
        cin >> jarak;
        cout << "\tMasukkan waktu yang anda lalui (dalam jam): ";
        cin >> waktu;
        kecepatan = jarak/waktu;
        cout << "\n\tKecepatan kendaraan anda berdasarkan data yang anda masukkan adalah ";
        cout << kecepatan << "km/h\n";
    }
    else if(pilihan==2){
        cout << "\tMasukkan jarak yang anda tempuh (dalam m): ";
        cin >> jarak;
        cout << "\tMasukkan waktu yang anda lalui (dalam detik): ";
        cin >> waktu;
        kecepatan = jarak/waktu;
        cout << "\n\tKecepatan kendaraan anda berdasarkan data yang anda masukkan adalah ";
        cout << kecepatan << "m/s\n";
    }
    else {
        cout << "Jangan becanda lah masbro\n";
        return 0;
    }

    cout << "\tTerima kasih sudah menggunakan program ini :D\n"; 

    return 0;
}