/*
    namaTugas       : tugas ke 3 Algoritma Pemrograman 
    namaProgrammer  : M. Ilham (23343008)
    kasusProgram    : mengetahui bintang seseorang berdasarkan tanggal dan bulan lahir
*/

#include <iostream>
using namespace std;

int main(){

    // month
    int januari, maret, mei, juli, agustus, oktober, desember;
    januari = maret = mei = juli = agustus = oktober = desember = 31;

    int februari = 28;
    
    int april, juni, september, november;
    april = juni = september = november = 30;

    // input day month
    int day, month;

    cout << "Masukkan tanggal dan bulan lahir dengan format dd mm (angka): ";
    cin >> day >> month;
    string zodiak;

    // jika bulan == x dan hari >= y dan hari <= bulan
    // atau 
    // bulan == x dan hari <=y dan hari > 0 
    
    //  aquarius
    if( (month == 1 && day >= 20 && day <= januari) || 
    (month == 2 && day <= 18 && day > 0) ) zodiak="Aquarius"; 
    // piesces
    else if( (month == 2 && day >= 19 && day <= februari) || 
    (month == 3 && day <= 20 && day > 0) ) zodiak="Piesces";
    // aries
    else if( (month == 3 && day >= 21 && day <= maret) || 
    (month == 4 && day <= 19 && day > 0) ) zodiak="Aries";
    // taurus
    else if( (month == 4 && day >= 20 && day <= april) || 
    (month == 5 && day <= 20 && day > 0) ) zodiak="Taurus";
    // gemini
    else if( (month == 5 && day >= 21 && day <= mei) || 
    (month == 6 && day <= 20 && day > 0) ) zodiak="Gemini";
    // cancer
    else if( (month == 6 && day >= 21 && day <= juni) || 
    (month == 7 && day <= 22 && day > 0) ) zodiak="Cancer";
    // leo
    else if( (month == 7 && day >= 23 && day <= juli) || 
    (month == 8 && day <= 22 && day > 0) ) zodiak="Leo";
    // virgo
    else if( (month == 8 && day >= 23 && day <= agustus) || 
    (month == 9 && day <= 22 && day > 0) ) zodiak="Virgo";
    // libra
    else if( (month == 9 && day >= 23 && day <= september) || 
    (month == 10 && day <= 22 && day > 0) ) zodiak="Libra";
    // scorpio
    else if( (month == 10 && day >= 23  && day <= oktober) || 
    (month == 11 && day <= 21 && day > 0) ) zodiak="Scorpio";
    // sagitarius
    else if( (month == 11 && day >= 22 && day <= november) || 
    (month == 12 && day <= 21 && day > 0) ) zodiak="Sagitarius";
    // capricorn
    else if( (month == 12 && day >= 22 && day <= desember) || 
    (month == 1 && day <= 19 && day > 0) ) zodiak="Capricorn";
    else {
        cout << "Tanggal tidak valid\n";
        return 0;
    }

    cout << "Zodiak kamu " << zodiak << endl;

    return 0;
}