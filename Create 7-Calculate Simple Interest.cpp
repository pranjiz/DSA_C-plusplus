#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int p;double si;
    cin>>p;
    double r;
    cin>>r;
    int t;
    cin>>t;
    si = floor(p*r*t/100);
    cout<<si<<endl; 
    return 0;
}


// Declare an integer variable p to store the principal amount.
// Prompt to input the principal amount using cin >> p;. The user is expected to enter the principal amount, and the program will store it in the variable p.
// Declare a double variable r to store the rate of interest.
// Prompt the user to input the rate of interest using cin >> r;. The user is expected to enter the rate of interest,the program will store it in the variable r.
// Declare an integer variable t to store the time period.
// Prompt the user to input the time period using cin >> t;. The user is expected to enter the time period, and the program will store it in the variable t.
// Calculate the simple interest (si) using the formula: si = floor(p * r * t / 100);
// p is the principal amount
// r is the rate of interest
// t is the time period
// si is the simple interest
// floor is used to round down the result to the nearest integer.
// Output the calculated simple interest using cout << si << endl;. The program will display the calculated simple interest on the console.
// Terminate the program by returning 0 from the main function.
