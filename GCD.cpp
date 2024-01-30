#include <iostream>
using namespace std;

int main(){
    int num1, num2, hcf, lcm;

    cout << "Enter the numbers: ";
    cin >> num1 >> num2;

    for(int i = 1; i <= num1 && i <= num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
            hcf = i;
        }
    }

    cout << "The GCD is: " << hcf << endl;

    lcm = num1 * num2 / hcf;
    cout << "The LCM is: " << lcm;

}