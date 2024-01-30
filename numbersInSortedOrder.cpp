#include <iostream>
using namespace std;

int main(){
    int a, b, c, low, middle, high;

    cout << "Enter the numbers: ";
    cin >> a >> b >> c;

    if(a > b && b > c){
        high = a;
        if(b > c){
            middle = b;
            low = c;
        }
        else{
            middle = c;
            low = b;
        }
    }
    else if(b > a && b > c){
        high = b;
        if(a > c){
            middle = a;
            low = c;
        }
        else {
            middle = c;
            low = a;
        }
    }
    else{
        high = c;
        if(a > b){
            middle = a;
            low = b;
        }
        else{
            middle = b;
            low = a;
        }
    }

    cout << low << " " << middle << " " << high;
    return 0;
    
}