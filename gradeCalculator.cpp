#include <iostream>
using namespace std;

int main(){
    float physics , math, biology, chemistry, computer, sum, average;
    

    cout << "Physics score: ";
    cin >> physics;

    cout << "math score: ";
    cin >> math;

    cout << "biology score: ";
    cin >> biology;

    cout << "chemistry score: ";
    cin >> chemistry;

    cout << "computer score: ";
    cin >> computer;

    sum = physics + math + biology + chemistry + computer;
    average = sum/5;

    if(average >= 90 && average <= 100)
        cout << "Your grade is: A";
    else if(average < 90 && average >= 80)
        cout << "Your grade is: B";
    else if(average < 80 && average >= 70)
        cout << "Your grade is: C";
    else if(average < 70 && average >= 60)
        cout << "Your grade is: D";
    else if(average < 60 && average >= 50)
        cout << "Your grade is: E";
    else
        cout << "Your grade is: F";
}