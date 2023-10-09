#include <iostream>

using namespace std;

int main(){

    // syarat prima : dibagi 1 dan bilangan itu sendiri

    int bil, awal, akhir;
    cout << "Masukkan bilangan awal : ";
    cin >> awal;
    cout << "Masukkan bilangan akhir : ";
    cin >> akhir;

    for(int i = awal; i <= akhir; i++){
        bil = 0;
        for(int j = 1; j <= i; j++){
            if(i%j==0){
                bil++;
            }
        }
        if(bil==2){
            cout << i << " adalah bilangan prima" << endl;
        }
    }

    return 0;
}