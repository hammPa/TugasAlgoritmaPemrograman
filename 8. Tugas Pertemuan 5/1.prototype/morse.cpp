#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

    //•-
int main(){
    
    char asli[] = {
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

    string hasil;
    string kalimat;
    cout << "Masukkan kata atau kalimat yang akan diubah ke morse : ";
    getline(cin, kalimat);

    for(int i = 0; i < kalimat.length(); i++){
        kalimat[i] = (char)toupper(kalimat[i]); // to upper default string, casting ke char
    }

    for(int karakter = 0; karakter < kalimat.length(); karakter++){
        for(int kode = 0; kode < sizeof(asli)/sizeof(char); kode++){
            if(kalimat[karakter]==asli[kode]){
                // cout << asli[kode] << endl;
                hasil.append(morse[kode]);
                cout << hasil << endl;
            }
        }
    }

    return 0;
}