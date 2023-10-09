/*
    namaTugas       : tugas ke 3 Algoritma Pemrograman 
    namaProgrammer  : M. Ilham (23343008)
    kasusProgram    : mengetahui wujud air berdasarkan suhu
*/

#include <iostream>
using namespace std;

int main(){

    float suhu;
    cout << "Masukkan suhu air dalam celcius: ";
    cin >> suhu;

    if(suhu<=0){
        cout << "Air berbentuk beku" << endl;
    }
    else if(suhu>0 && suhu<100){
        cout << "Air berbentuk cair" << endl;
    }
    else {
        cout << "Air berbentuk gas" << endl;
    }

    return 0;
}