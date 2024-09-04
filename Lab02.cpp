#include <iostream>
using namespace std;

int main()
{
    float A;
    float B;
    float X;

    cout << "Please enter a value for A: ";
    cin >> A;

    cout << "Please enter a value for B: ";
    cin >> B;

    cout << "Solving the equation: " << A << "x + " << B << " = 0" << endl;

    X = -B / A;

    cout << "The solution for x is: " << X << endl;

    return 0;
}