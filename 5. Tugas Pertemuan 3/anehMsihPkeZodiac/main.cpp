#include <iostream>
using namespace std;

int main(){

    // month
    const int january = 31;
    const int february = 28;
    const int march = 31;
    const int april = 30;
    const int may = 31;
    const int june = 30;
    const int july = 31;
    const int august = 31;
    const int september = 30;
    const int october = 31;
    const int november = 30;
    const int december = 31;

    // input day month
    int day, month;

    cout << "Masukkan tanggal dan bulan lahir dengan format dd mm (bulan juga angka): ";
    cin >> day >> month;

    switch(month){
        case 1:
            if(day<=19 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Capricorn\n";
            } 
            else if(day>=20 && day<=january){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Aquarius\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " january\n";
            } 
        break;

        case 2:
            if(day<=18 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Aquarius\n";
            } 
            else if(day>=19 && day<=february){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Piesces\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " february\n";
            } 
        break;

        case 3:
            if(day<=20 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Piesces\n";
            } 
            else if(day>=21 && day<=march){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Aries\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " maret\n";
            } 
        break;

        case 4:
            if(day<=19 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Aries\n";
            } 
            else if(day>=20 && day<=april){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Taurus\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " april\n";
            } 
        break;

        case 5:
            if(day<=20 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Taurus\n";
            } 
            else if(day>=21 && day<=may){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Gemini\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " may\n";
            } 
        break;

        case 6:
            if(day<=20 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Gemini\n";
            } 
            else if(day>=21 && day<=june){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Cancer\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " june\n";
            } 
        break;

        case 7:
            if(day<=22 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Cancer\n";
            } 
            else if(day>=23 && day<=july){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Leo\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " july\n";
            } 
        break;

        case 8:
            if(day<=22 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Leo\n";
            } 
            else if(day>=23 && day<=august){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Virgo\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " august\n";
            } 
        break;

        case 9:
            if(day<=22 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Virgo\n";
            } 
            else if(day>=23 && day<=september){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Libra\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " september\n";
            } 
        break;

        case 10:
            if(day<=22 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Libra\n";
            } 
            else if(day>=23 && day<=october){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Scorpio\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " october\n";
            } 
        break;

        case 11:
            if(day<=21 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Scorpio\n";
            } 
            else if(day>=22 && day<=november){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Sagitarius\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " november\n";
            } 
        break;

        case 12:
            if(day<=21 && day>0){ // contoh 13 1
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Sagitarius\n";
            } 
            else if(day>=22 && day<=december){
                cout << "Dengan tanggal "<< day << " dan bulan " << month << " zodiak kamu Capricorn\n";
            }
            else {
                cout << "Yang serius lah masbro mana ada tanggal " << day << " december\n";
            } 
        break;

        default:
        break;
    }



    return 0;
}