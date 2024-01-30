#include <iostream>
using namespace std;

int main(){
    int num, fact = 1;

    cout << "Enter the number: ";
    cin >> num;

    if(num == 0 || num == 1){
        cout << fact;
        
    }else{

        while(num > 0){
            fact = num * fact;
            num -= 1;
        }
        cout << fact;
    }        
        return 0;
    
}
