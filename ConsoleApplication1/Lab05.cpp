#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to encode the input string using the cipher
string encode(const string& text) {
    // The cipher vector
    vector<char> cipher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
    string encodedText = "";

    for (char c : text) {
        // Check if the character is uppercase (A-Z)
        if (c >= 'A' && c <= 'Z') {
            encodedText += cipher[c - 65];
        }
        // Check if the character is lowercase (a-z)
        else if (c >= 'a' && c <= 'z') {
            char upperCaseLetter = c - 32; // Convert to uppercase
            char upperCaseCode = cipher[upperCaseLetter - 65]; // Get ciphered uppercase
            encodedText += upperCaseCode + 32; // Convert back to lowercase
        }
        // If it's not a letter, leave it unchanged
        else {
            encodedText += c;
        }
    }

    return encodedText;
}

int main() {
    // Input string
    string text;

    // Get the input string from the user
    cout << "Enter a string to encode (max 128 characters): ";
    getline(cin, text);

    // Check if the input exceeds 128 characters
    if (text.length() > 128) {
        cout << "Error: The input exceeds the maximum limit of 128 characters." << endl;
        return 1;
    }

    // Encode the string and output the result
    string encodedText = encode(text);
    cout << "Encoded text: " << encodedText << endl;

    return 0;
}
