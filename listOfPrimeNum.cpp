#include <iostream>
using namespace std;

int main(){
    int firstNum, lastNum, i;
    bool isPrime = true;
    cout << "Enter the first number: ";
    cin >> firstNum;

    cout << "Enter the last number: ";
    cin >> lastNum;

     
    

    while(firstNum <  lastNum){
        if(firstNum == 0 || firstNum == 1){
            isPrime = false;
        }else{
            isPrime = true;
        }
        for(i = 2; i <= firstNum/2; ++i){
            if(firstNum % i == 0){
                isPrime = false;
                break;
            }            
        }   

        if(isPrime)
            cout << firstNum << ", ";
            

        firstNum++;
    }
       
    return 0;
}