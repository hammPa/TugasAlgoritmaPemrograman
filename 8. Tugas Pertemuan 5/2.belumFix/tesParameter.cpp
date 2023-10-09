#include <iostream>

using namespace std;

void intPointer(int *a){
    cout << (*a)++ << endl; // kalau var int pointer, ++ nya diluar kurung
    cout << *a << endl;
    cout << *(a)++ << endl;
}

// normal
void intArr(int arr1[], int arr2[]){
    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}


// pointer
void intArrP(int *arr1, int *arr2){
    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main(){

    int a = 5;
    intPointer(&a);

    cout << endl << endl;


    int arr1[5] = {1,2,3,4,5}, arr2[5] = {6,7,8,9,0};
    intArr(arr1, arr2); // ini terhitung bukan pass by value
    cout << endl << endl;
    intArrP(arr1, arr2); // ini terhitung bukan pass by value

    return 0;
}