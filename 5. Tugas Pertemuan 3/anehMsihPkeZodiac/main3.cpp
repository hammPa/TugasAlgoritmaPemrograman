#include <iostream>
using namespace std;

int main(){
    
    int date, month;
    cout << "Masukkan tanggal dan bulan dalam angka : ";
    cin >> date >> month;

    string zodiac[] = {"Capricorn", "Aquarius", "Piesces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagitarius"};
    int end_dates[] = {20, 19, 21, 20, 21, 21, 23, 23, 23,23, 22, 22};

    if(date > end_dates[month-1]) month = month%12 + 1;
    cout << "Zodiak anda : " << zodiac[month-1] << endl;

    return 0;
}
