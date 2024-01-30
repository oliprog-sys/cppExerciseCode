#include <iostream>
using namespace std;

int main(){
    int num[7];

    int size = sizeof(num)/ sizeof(num[0]);

    for(int i = 0; i < size; i++){
        cout << "Enter the value of num["<< i << "]: ";
        cin >> num[i];
    }

    int max = num[0];
    for(int i = 0; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }        
    }

    int secondMax = num[0];

    for(int i = 0; i < size; i++){
        if(num[i] > secondMax && num[i] < max){            
            secondMax = num[i];                        
        }
        else if(num[i] == secondMax && num[i] == max){
            secondMax = num[i + 1];
        }
       
    }

    cout << "The second largest number in the array is: " << secondMax << endl;
    cout << "The largest number from the array is: " << max;
}