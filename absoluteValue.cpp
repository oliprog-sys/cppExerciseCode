#include <iostream>
using namespace std;


void increment(int& num) {
    num++;
}

int main(){
    /*int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0){
        num = -1 * num;
    }

    cout << "The absoulute value of the number is: " << num;
    */

    /*int num[10] = {1};
    cout << num[2];*/

    int value = 5;
    std::cout << "Before increment: " << value << std::endl;
    increment(value);
    std::cout << "After increment: " << value << std::endl;

    cout << value << endl;
    return 0;
}
