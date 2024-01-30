// A program that calculate the sum odd numbers.
#include <iostream>

using namespace std;

int main(){

    int N, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> N;
    do{
        if(i % 2 == 1){
            sum += i;
        }
        i++;
    }while(i <= N);

    cout << "The sum of the odd numbers is: " << sum;
         
   return 0; 


   

