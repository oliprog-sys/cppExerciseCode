/* A program that checks whether a number is perfect number or not
    perfect number is a number in which the sum of the factor of the number is equal to the number itself
*/
#include <iostream>

using namespace std;

int main(){

    int num, sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> num;

    while(i < num){
        if(num % i == 0){
            sum = sum +i;
        }
        i++;
    }

    if(num == sum){
        cout << num << " is perfect number.";
    }
    else
        cout << num << " is not perfect number.";
}