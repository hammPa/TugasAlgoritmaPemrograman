/*
    namaTugas       : tugas ke 3 Algoritma Pemrograman 
    namaProgrammer  : M. Ilham (23343008)
    kasusProgram    : mengetahui seseorang dikatakan dewasa atau belum
*/

#include <iostream>
using namespace std;


int main(){

    int umur;
    cout << "Masukkan umur : ";
    cin >> umur;

    if(umur==1){
        cout << "Masih bayi" << endl;
    }
    else if(umur>1 && umur<=5){
        cout << "Masih balita" << endl;
    }
    else if(umur>5 && umur <=10){
        cout << "Masih anak anak" << endl;
    }
    else if(umur>10 && umur <=17){
        cout << "Masih remaja" << endl;
    }
    else if(umur>17 && umur <=44){
        cout << "Sudah dewasa" << endl;
    }
    else if(umur>44 && umur <=55){
        cout << "Sudah mulai lanjut usia" << endl;
    }
    else {
        cout << "Sudah lanjut usia" << endl;
    }
    return 0;
}