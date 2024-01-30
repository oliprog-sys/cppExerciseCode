#include <iostream>
using namespace std;

int main(){
    int n;
    float sum = 0, ave, num[100];

    cout << "Enter number: ";
    cin >> n;

    while(n > 100 || n < 0){
        cout << "You entered invalid value." << endl;
        cout << "Enter number: ";
        cin >> n;
    }
    
    for(int i = 0 ; i < n; i++){
        cout << i+1 << " Enter a number: ";
        cin >> num[i];
        sum += num[i];
    }
    
    ave = sum / n;

    cout << "The average is: " << ave;
    
}