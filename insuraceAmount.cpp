#include <iostream>
using namespace std;

int main(){
    int age, insurance, income;
    char gender, martial;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter you gender with (M OR F): ";
    cin >> gender;

    cout << "Enter your martial status with (Y OR N): ";
    cin >> martial;

    cout << "Enter your income:";
    cin >> income;

    if(age < 25){
        insurance = 0.04 * income;
    }
    else if(age >= 25 && age <= 35){
        insurance = 0.06 * income;
    }
    else
        insurance = 0.05 * income;

    if(gender == 'F'){
        insurance -= 500;
    }
    if(martial == 'Y'){
        insurance -= 100;
    }


    cout << "The  amount of insurance is: " << insurance;
}