#include <iostream>
using namespace std;

int main(){
    int num, rem, originalNum, n = 0, sum = 0, result;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

   while(originalNum != 0){
        originalNum = originalNum / 10;
        n++;
   }
    

   originalNum = num;

   while(originalNum != 0){
        rem = originalNum % 10;
        result = 1;
       for(int counter = 0; counter < n; counter++){
            result = result * rem;
        }
        
        sum = sum + result;
        originalNum = originalNum / 10;
   }

   if(sum == num){
        cout << num << " is an armstrong number.";
   }
   else{
        cout << num << " is not an armstrong number.";
   }

  return 0;
}