#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c;
    double root1, root2, real, imag, dis;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    dis = b*b -4*a*c;

    cout << fixed << setprecision(2) << endl;

    if(dis > 0){
        root1 = (-b + sqrt(dis))/(2*a);
        root2 = (-b - sqrt(dis))/(2*a);

        cout << "root1 = " << root1 << endl;
        cout << "root2 = " << root2 << endl;
    }
    else if(dis == 0){
        root1 = -b/(2*a);
        cout << "root1 = root2 = " << root1 << endl;
    }
    else{
        real = -b/2*a;
        imag = sqrt(-dis)/(2*a);

        cout << real << " + " << imag << 'i'<< endl;
        cout << real << " - " << imag << 'i'<< endl;
    }
    return 0;

}