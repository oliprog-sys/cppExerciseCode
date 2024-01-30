#include <iostream>
using namespace std;

int main(){
    int N, cube;

    cout << "Enter number to be the last number to be cubed: ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        cube = i * i * i;
        cout << i << " cube is: " << cube << endl;
    }
}