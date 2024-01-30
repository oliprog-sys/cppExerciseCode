#include <iostream>

// A program that reverse the number entered by the user.
using namespace std;

int main()
{
    int num, reverse = 0, remainder;

    cout << "Enter the number: ";
    cin >> num;

    while (num > 0)
    {
        remainder = num % 10;
        reverse = remainder + (reverse * 10);
        num /= 10;
    }

    cout << "The reversed output is " << reverse;
}