#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0){
        num = -1 * num;
    }

    cout << "The absoulute value of the number is: " << num;
    

    
    return 0;
}
