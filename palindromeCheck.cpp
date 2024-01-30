// A program that check a number is palindrome number.
/*#include <iostream>

using namespace std;
*/

/*int main(){

    int num, reverse = 0, remainder, originalNum;

    cout << "Enter the number: ";
    cin >> num;

    
    originalNum = num;
    while(originalNum > 0){

        remainder = originalNum % 10;
        reverse = remainder + (reverse *10);
        originalNum /= 10;
    }
    cout << reverse << endl;
    
   if(num == reverse){
        cout << num << " is palindrome number";
    }
    else {
        cout << num << " is not palindrome number";
    }
    return 0;
    */
/*
   int main(){
    int x, reverse = 0,newX, rem;
    bool isPalindrome = true;


    cout << "Input: x = ";
    cin >> x;


    newX = x;
    while(newX != 0){
        rem = newX % 10;
        reverse = rem + (reverse * 10);
        newX /= 10;
    }

    if(reverse == x){
        isPalindrome = true;
    }
    else{
        isPalindrome = false;
    }
    
    cout << "Output: " << isPalindrome;
}*/


#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reversed = 0, rem;

        while (x != 0) {
            rem = x % 10;
            reversed = rem + (reversed * 10);
            x = x / 10;
        }

        return reversed;
    }
};

int main() {
    int x;
    cin >> x;

    Solution solution;
    int reversed = solution.reverse(x);

    cout << "Input: x = " << x << endl;
    cout << "Output: " << reversed << endl;

    return 0;
}

    
