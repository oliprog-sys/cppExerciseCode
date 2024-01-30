#include <iostream>

using namespace std;

int main(){

    /*for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

  for(int i = 1; i <= 5; i++){
        for(int j =5; j >= 1 ; --j){
            if(j > i){
                cout << "  ";
            }
            else  {
                cout << "* ";
            }
        }
        cout << endl;
   }
   

  cout << endl;

    for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= i; --j){
            cout << "* ";
        }
        cout << endl;
    }
   

    cout << endl;

    for(int i = 5; i >= 1; --i){
        for(int j = 5; j >= 1; --j){
            if(j <= i){
                cout << "* ";
            }
            else 
                cout << "  ";
        }
        cout << endl;
    }
*/
    int size;

    cout << "Enter the size: ";
    cin >> size;

    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size-i; j++){
            cout << "  ";
        }

        for(int k = 1; k <= 2*i -1; k++){
            cout << "* ";
        }
        cout << endl;
    }

}