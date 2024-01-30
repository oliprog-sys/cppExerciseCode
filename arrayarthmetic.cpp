#include <iostream>
using namespace std;

int main(){

    const int dim = 3;
    int arr[dim][dim];

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            cout << "arr[" << i << "][" << j << "]: "; 
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < dim; i++){
        int addRow = 0;
        for(int j = 0; j < dim; j++){
            addRow += arr[i][j];
        }
        cout << "The sum of the " << i+1 << " row is: " << addRow << endl; 
    }

    for(int i = 0; i < dim; i++){
        int addCol = 0;
        for(int j = 0; j < dim; j++){
            addCol += arr[j][i];
        }
        cout << "The sum of the " << i+1 << " column is: " << addCol << endl; 
    }

    int addFirstDiagonal = 0;
    for(int i = 0; i < dim; i++){
        addFirstDiagonal += arr[i][i];
    }
    cout << "The sum of the first diagonal is: " << addFirstDiagonal << endl;

    int addSecondDiagonal = 0;
    for(int i = 0; i < dim; i++){
        addSecondDiagonal += arr[i][dim-i-1];
    }
    cout << "The sum of the second diagonal is: " << addSecondDiagonal << endl;
}