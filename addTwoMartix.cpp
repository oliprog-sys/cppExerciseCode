#include <iostream>
using namespace std;

int main(){
    int r, c, a[100][100], b[100][100], sum[100][100];

    cout << "Enter the number of rows: ";
    cin >> r;

    cout << "Enter the number of column: ";
    cin >> c;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Enter b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    cout << endl;
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
}