#include <iostream>
#include <string.h>

using namespace std;

void judul(int *);
void inputDataPeserta(int jumlahPeserta, string namaPeserta[], int nomorPeserta[], int jam[], int menit[], int detik[]);
void waktuKeDetik(int jumlahPeserta, int totalWaktu[], int selisihWaktu[], int waktuStart, int jam[], int menit[], int detik[]);
void displayInput(int jumlahPeserta, string namaPeserta[], int nomorPeserta[], int jam[], int menit[], int detik[], int totalWaktu[], int selisihWaktu[]);
void displayRank(int jumlahPeserta, string namaPeserta[], int nomorPeserta[], int selisihWaktu[]);


int main(){

    int jumlahPeserta;
    judul(&jumlahPeserta);

    string namaPeserta[jumlahPeserta];
    int nomorPeserta[jumlahPeserta], selisihWaktu[jumlahPeserta], totalWaktu[jumlahPeserta];
    int jam[jumlahPeserta], menit[jumlahPeserta], detik[jumlahPeserta];
    const int waktuStart = 7 * 3600; // 07:00:00

    inputDataPeserta(jumlahPeserta, namaPeserta, nomorPeserta, jam, menit, detik);
    waktuKeDetik(jumlahPeserta, totalWaktu, selisihWaktu, waktuStart, jam, menit, detik);
    displayInput(jumlahPeserta, namaPeserta, nomorPeserta, jam, menit, detik, totalWaktu, selisihWaktu);
    displayRank(jumlahPeserta, namaPeserta, nomorPeserta, selisihWaktu);

    return 0;
}

void judul(int *jumlahPeserta){
    cout << "/n===============================================" << endl;
    cout << "Selamat datang di program menghitung lomba lari" << endl;
    cout << "===============================================\n" << endl;
    cout << "Mau memasukkan berapa peserta : ";
    cin >> *jumlahPeserta;
}

void inputDataPeserta(int jumlahPeserta, string namaPeserta[], int nomorPeserta[], int jam[], int menit[], int detik[]){
    for(int i = 0; i < jumlahPeserta; i++){
        cin.get();
        cout << "Masukkan nama peserta ke " << (i+1) <<  " : ";
        getline(cin, namaPeserta[i]);
        cout << "Masukkan nomor peserta ke " << (i+1) <<  " : ";
        cin >> nomorPeserta[i];
        cout << "Masukkan waktu finish peserta ke " << (i+1) <<  " : ";
        cin >> jam[i] >> menit[i] >> detik[i];
        cout << endl;
    }
}

void waktuKeDetik(int jumlahPeserta, int totalWaktu[], int selisihWaktu[], int waktuStart, int jam[], int menit[], int detik[]){
    for(int i = 0; i < jumlahPeserta; i++){
        if(jam[i] >= 0 && jam[i] <= 23 && menit[i] >= 0 && menit[i] <=59 && detik[i] >= 0 && detik[i] <=59){
            totalWaktu[i] = jam[i] * 3600 + menit[i] * 60 + detik[i];
            selisihWaktu[i] = totalWaktu[i] - waktuStart;
        }
    }
}

void displayInput(int jumlahPeserta, string namaPeserta[], int nomorPeserta[], int jam[], int menit[], int detik[], int totalWaktu[], int selisihWaktu[]){
    for(int i = 0; i < jumlahPeserta; i++){
        cout << "Nama peserta ke " << (i+1) <<  " : " << namaPeserta[i] << endl;
        cout << "Nomor peserta ke " << (i+1) <<  " : " << nomorPeserta[i] << endl;

        cout << "Waktu start peserta ke " << (i+1) <<  " : " << jam[i] << ":";
        cout << menit[i] << ":" << detik[i] << endl;
        cout << "Waktu finish peserta ke " << (i+1) <<  " : " << jam[i] << ":";
        cout << menit[i] << ":" << detik[i] << endl;
        
        cout << "Total waktu perserta ke " << (i+1) << " : " << totalWaktu[i] << " detik" << endl;
        cout << "Selisih waktu perserta ke " << (i+1) << " dengan waktuAwal : " << selisihWaktu[i]  << " detik" << endl;
        cout << endl;
    }
}

void displayRank(int jumlahPeserta, string namaPeserta[], int nomorPeserta[], int selisihWaktu[]){
    int peringkat[jumlahPeserta];
    
    // semua ranking 1
    for(int i = 0; i < jumlahPeserta; i++){
        peringkat[i] = 1;
    }

    // jika ada yang lebih besar, ranking naik 1
    for(int i = 0; i < jumlahPeserta; i++){ // [30, 10, 20] -> [10, 30, 20]
        for(int j = 0; j < jumlahPeserta; j++){
            if(selisihWaktu[j] < selisihWaktu[i]){
                peringkat[i]++;
            }
        }    
    }
    
    // print ranking
    for(int i = 0; i < jumlahPeserta; i++){
        cout << "Peserta " << namaPeserta[i] << " ranking : " << peringkat[i] << endl;
    }

}