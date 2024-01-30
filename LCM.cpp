#include <iostream>
using namespace std;

int main(){
    int num1, num2, largest, LCM;

    cout << "Enter number1 and number 2: ";
    cin >> num1 >> num2;

    if(num1 > num2)
        largest = num1;
    else 
        largest = num2;


    while(largest > 0){
        if(largest % num1 == 0 && largest % num2 == 0){
            LCM = largest;
            break;
        }
        largest++;
    }

    cout << "The LCM is: " << LCM;
}