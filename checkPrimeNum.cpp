#include <iostream>

using namespace std;

int main(){
    int num, i;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> num;

    if(num == 0 || num ==1){
        cout << num << " is non-prime number.";
    }

    for(i = 2; i <= num/2; i++){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << num << " is prime number";
    }
    else{
        cout << num << " is not prime number";
    }
}