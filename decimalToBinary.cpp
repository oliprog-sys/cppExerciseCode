#include <iostream>

using namespace std;

int main(){
    int num, binary = 0, rem, base = 1;

    cout << "Enter the number: ";
    cin >> num;

    while(num > 0){
        rem = num % 2;
        binary = binary + (rem * base);
        base = base*10;
        num = num /2;;
    }

    cout << "The binary form is: " << binary;
}