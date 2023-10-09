#include <iostream>
#include <string.h>
#include <cctype> // upper

using namespace std;

void keHurufBesar(string *kalimat){
    for(int i = 0; i < (*kalimat).length(); i++){ // harus pakai() biar tidak ambigu
        (*kalimat)[i] = (char)toupper((*kalimat)[i]); // to upper default string, casting ke char
    }
}

string keMorse(string kalimat, string morse[], string huruf){
    string hasil;
    for(int karakter = 0; karakter < kalimat.length(); karakter++){
        for(int kode = 0; kode < sizeof(huruf)/sizeof(char); kode++){
            if(kalimat[karakter]==huruf[kode]){
                // cout << huruf[kode] << endl;
                hasil.append(morse[kode]);
                // cout << hasil << endl;
            }
        }
    }
    return hasil;
}

//•-
int main(){
    
    char huruf[] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '1', '2', '3', '4', '5',
        '6', '7', '8', '9', '0'
    };

    string morse[] = {
        "•-", "-•••", "-•-•", "-••", "•", "••-•", "--•", "••••", "••", "•----", "-•-", "•-••", "--", // A B C
        "-•", "---", "•--•", "--•-", "•-•", "•••", "-", "••-", "•••-", "•--", "-••-", "-•--", "--••",
        "•----", "••---", "•••--", "••••-", "•••••", // 1 2 3 4 5 6 7 8 9 0
        "-••••", "--•••", "---••", "----•", "-----"
    };

    string kalimat, hasil;
    cout << "Masukkan kata atau kalimat yang akan diubah ke morse : ";
    getline(cin, kalimat);

    keHurufBesar(&kalimat);
    cout << kalimat << endl;

    cout << "Hasil konversi " << kalimat << " ke morse adalah : ";
    hasil = keMorse(kalimat, morse, huruf);
    cout << hasil << endl;
 
    return 0;
}