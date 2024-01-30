#include <iostream>

using namespace std;

int main(){
    int a[] = {0,1,5,0,9};
    int size = sizeof(a)/sizeof(a[0]);
    int temp;

    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(a[j] == 0){
                temp = a[j];
                a[j]= a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}