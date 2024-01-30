#include <iostream>
using namespace std;

int main(){

     int size, a[10];
     size = sizeof(a)/sizeof(a[0]);    
   
    for(int i = 0; i < size; i++ ){
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }
    int max = a[0];

    for(int i = 1; i <= size; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    int secMax = a[0];
    for(int i = 0; i < size; i++){
        if(a[i] > secMax && a[i] != max){
            secMax = a[i];
        }
    }

    cout << "The largest number in this array is: " << max << endl;
    cout << "The second largest number in this array is: " << secMax << endl;

}