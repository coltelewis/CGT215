#include <iostream>
#include <cmath>  // for geometric series calculations
using namespace std;

//Code is used to pick a math operation (factorial, artihmetic series, geometric series) then, do the math based on what the person running inputs
void printMenu(int& choice) {
    //open prompt
    cout << "Sup, I'm your calculator... pick a series or operation:" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Arithmetic Series" << endl;
    cout << "3. Geometric Series" << endl;
    cout << "4. Exit" << endl;
    cout << "\nYour Selection: ";
    cin >> choice;
}

void factorial() {
    int num;
    long long result = 1;  //handle large factorials
    cout << "Gimme a positive integer: ";
    cin >> num;

    //validate the input
    while (num < 0) {
        cout << "smh lol, needs to be a non-negative integer: ";
        cin >> num;

    }

    //math time... calculate factorial
    cout << num << "! = ";
    for (int i = 1; i <= num; i++) {
        result *= i;
        cout << i;
        if (i != num) {
            cout << " * ";
        }
    }
    cout << " = " << result << endl;
}

void arithmetic() {
    int start, diff, numElements, sum = 0;

    //get input for series
    cout << "First number in the series: ";
    cin >> start;
    cout << "The difference: ";
    cin >> diff;
    cout << "How many elements in the series: ";
    cin >> numElements;


    while (numElements <= 0) {   //validate number of e ements
        cout << "Number of elements neds to be positive lmao. Try again: ";
        cin >> numElements;
    }

    //math time... calculate arithmetic series
    cout << "Series: ";
    for (int i = 0; i < numElements; i++) {
        int term = start + i * diff;
        sum += term;
        cout << term;
        if (i != numElements - 1) {
            cout << " +";
        }
    }
    cout << " = " << sum << endl;
}

void geometric() {

    int a, r, numElements;

    double sum = 0;

    //get input for GS
    cout << "Starting number (a): ";
    cin >> a;
    cout << "The ratio (r): ";
    cin >> r;
    cout << "Number of elements: ";
    cin >> numElements;


    while (numElements <= 0) { //vadliate elements
        cout << "Number of elements must be positive LOL try harder. Try again: ";
        cin >> numElements;
    }

    cout << "Series: ";  //math time... calculate geometric series
    for (int i = 0; i < numElements; i++) {
        double term = a * pow(r, i);
        sum += term;
        cout << term;
        if (i != numElements - 1) {
            cout << " + ";
        }
    }
    cout << " = " << sum << endl;
}

void runCalculator() {
    int choice;
    char again;

    //loop to allow the user to perform multiple operations
    do {
        printMenu(choice); //show the menu and get the user's choice


        if (choice > 3 || choice < 1) {  //invalid choice or user exit
            cout << "smh, invalid choice. F*** this..." << endl;
            return;
        }
        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }

        //Ask the user if they want to go again
        cout << "another around? :0 [Y/N]: ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
}

int main() {
    //start program
    runCalculator();
    return 0;
}