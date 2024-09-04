#include <iostream>
using namespace std;

//This code is a simple program that solves the equation Ax+B=0.

int main()
{
    //Track all my main variables needed for the equation. 
    float A;
    float B;
    float X;

    //Go ahead and get my first A value 
	std::cout << "Sup my name is Colten, I will help you solve the following equation: Ax+B=0" << endl;
    cout << "What would you like A to be? ";
    cin >> A;

    //Go ahead and get my first B value 
    cout << "What would you like B to be? ";
    cin >> B;

    //Do the math and get the solution for X
    cout << "Solving the equation: " << A << "x + " << B << " = 0" << endl;
    X = -B / A;

    //Output the juicy solution ^_^
    cout << "The solution for x is = " << X << endl;

    return 0;
}