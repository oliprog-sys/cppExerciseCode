#include <iostream>
using namespace std;

int main(){ 

    for(int i =1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    for(int i =1; i <= 5; i++){
        for(int j = 5; j > i; --j){
            cout << "  ";
        }

        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        cout << endl;
    }

    for(int i = 5; i > 0; --i){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    for(int i = 5; i > 0; --i){
        for(int j = 5; j > i; --j){
            cout << "  ";
        }

        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 5; i++){
        for(int j = 5; j-1 > i; --j){
            cout << "  ";
        }
        for(int k = 0; k <= i; k++){
            cout << k+1 << " ";        
        }
        for(int m = i; m >= 1; --m){
            cout << m << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= 4; i++){
        for(int j = 4; j > i; --j){
            cout << "  ";
        }
        for(int k = 0; k < 2*i - 1; k++){
            cout << i << " ";
        }
        cout << endl;
    }
    int m = 2;
    for(int i = 5; i <= 7; i++){
        for(int j = 5; j <= i; j++ ){
            cout << "  ";
        }
        
        for(int k = 0; k < 2*m +1; k++){
            cout << i << " ";
        }
        --m;
        cout << endl;
    }

    for(int i = 5; i > 0; --i){
        for(int j = 5; j > i; --j){
            cout << "  ";
        }
        for(int k = 0; k < 2*i -1; k++){
            cout << i << " ";
        }
        cout << endl;
    }
    for(int i = 2; i <= 5; i++){
        for(int j = 5; j > i; --j){
            cout << "  ";
        }
        for(int k = 2; k < 2*i + 1; k++){
            cout << i << " ";
        }
        cout << endl;
    }
}
