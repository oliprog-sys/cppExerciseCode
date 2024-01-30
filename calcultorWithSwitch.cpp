#include <iostream>

using namespace std;

int main(){

    char choice;
    int num1, num2;

    

    do{
        cout << "**************************************************";
        cout << "+:  to add numbers" << endl;
        cout << "-:  to substract numbers" << endl;
        cout << "*:  to multiply numbers" << endl;
        cout << "/:  to division numbers" << endl;
        cout << "***************************************************" << endl;

        cout << "Enter an operation: ";
        cin >> choice;
        cout << "Enter the first number: " ;
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        
        switch(choice){
            case '+':
                cout << "The sum is: " << num1 + num2 <<endl;
                break;
            case '-':
                cout << "The difference is: " << num1 - num2 <<endl;
                break;
            case '*':
                cout << "The product is: " << num1 * num2 <<endl;
                break;
            case '/':
                if(num2 == 0){
                    cout << "The denominator can't be zero(0).";
                }
                else{
                    cout << "The quotient is: " << num1 / num2 <<endl;
                    break;
                }
            default: 
                cout << "INVALID OPERATOR.";

            cout << endl;
        }
        }while(true);
    
}