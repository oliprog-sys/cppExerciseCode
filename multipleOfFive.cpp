#include <iostream>
using namespace std;

int main(){
    int multiple = 1;

    for(int i = 1; multiple < 100; i++){
        multiple = 5 * i;
        cout << multiple << " ";
    }
    
}