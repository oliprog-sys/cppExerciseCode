// A program that add a natural numbers up to the number given by the user.
#include <iostream>

using namespace std;

int main(){

    int n, sum = 0, i = 1;

    cout << "Enter the the largest natural number: ";
    cin >> n;    

    while(i <= n){
        sum += i;
        i++;
    }

    cout << "The sum of the natural numbers is: " << sum << endl;
    return 0;
}