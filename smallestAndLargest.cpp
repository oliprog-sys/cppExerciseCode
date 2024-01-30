#include <iostream>
using namespace std;

int main(){
    int a[] = {3,5,7,2,7,4,8,9};
    int temp;
    int size = sizeof(a)/sizeof(a[0]);
    int largest = a[0];
    int smallest = a[0];

    for(int i = 1; i <= size; i++){
        if(a[i] > largest){
            largest = a[i];
        }

        if(a[i] < smallest){
            smallest = a[i];
        }
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

}