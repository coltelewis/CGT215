#include <iostream>
using namespace std;

//Code is used to pick a math operation then, do the math based on what the person running inputs. 

void printConsole(int& choice) {
    //Prompt the different operations for math time
    cout << "Sup I'm your caluclator... choose an operation now:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "\nYour Selection: ";
    cin >> choice;  //Get the specific operation that the user wants
}

void getChoices(float& A, float& B) {
    //Compile the choices the person put in and return the values
    cout << "Give your first number: ";
    cin >> A;
    cout << "And now your second number: ";
    cin >> B;
}

void add(float A, float B) {
    //Math time... do addition.
    cout << "Adding: " << A << " + " << B << " = " << A + B << endl;
}

void subtract(float A, float B) {
	//Math time... do subtraction.
    cout << "Subtracting: " << A << " - " << B << " = " << A - B << endl;
}

void multiply(float A, float B) {
	//Math time... do multiplication.
    cout << "Multiplying: " << A << " * " << B << " = " << A * B << endl;
}

void divide(float A, float B) {
	//math time... do division.
    if (B != 0) {
        cout << "Dividing: " << A << " / " << B << " = " << A / B << endl;
    }
    else {
        cout << "lol nice try, you can't do 0" << endl;
    }
}

int main() {
    int choice;
    float A, B;

	//show the console and get the user's choice
    printConsole(choice);
    getChoices(A, B);

	//pick the funciton that best fits the user's choice
    if (choice == 1) {
        add(A, B);
    }
    else if (choice == 2) {
        subtract(A, B);
    }
    else if (choice == 3) {
        multiply(A, B);
    }
    else if (choice == 4) {
        divide(A, B);
    }
    else {
		//if the options is invalid, let the user know
        cout << "smh, pick a different choice. Reason: Invalid choice." << endl;
    }

    return 0;
}
