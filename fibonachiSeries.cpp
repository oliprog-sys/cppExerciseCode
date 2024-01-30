// A program that calculte the fibonachi series.
#include <iostream>

using namespace std;

int main(){
    int n1 = 0, n2 = 1, nextNum, n;

    cout << "Enter the number of terms: "<< endl;
    cin >> n;

    cout << n1;
    cout << ", " << n2;

    for(int i = 0; i <= n; i++){
        nextNum = n1 + n2;
        cout << ", " << nextNum;
        n1 = n2; 
        n2 = nextNum;

    }
}