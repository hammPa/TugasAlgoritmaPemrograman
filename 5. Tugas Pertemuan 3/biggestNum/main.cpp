#include <iostream>
using namespace std;

int main(){

    // bil terbesar dari 3 bil
    int angka1, angka2, angka3;

    cout << "Masukkan 3 angka acak dipisahkan spasi (ex: 20 50 60): ";
    cin >> angka1 >> angka2 >> angka3;
    cout << angka1 << angka2 << angka3 << endl;

    if(angka1>=angka2  && angka1>=angka3){
        cout << "Angka terbesar : " << angka1 << endl;
    }
    else if(angka2>=angka1  && angka2>=angka3){
        cout << "Angka terbesar : " << angka2 << endl;
    }
    else {
        cout << "Angka terbesar : " << angka3 << endl;
    }




    return 0;
}