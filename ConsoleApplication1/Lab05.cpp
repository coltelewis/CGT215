#include <iostream>
#include <vector>
#include <string>  // for handling strings

using namespace std;

// encode function to translate the input string using the cipher

string encode(const string& text) {

    vector<char> cipher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };   //cipher table

    string resultedText = ""; //stored result


    for (char c : text) {

        if (c >= 'A' && c <= 'Z') {   // if it's a letter translate
            resultedText += cipher[c - 65];  //map
        }
        // if't it's lowercase do this one instead.
        else if (c >= 'a' && c <= 'z') {
            char upperCaseLetter = c - 32;  //convert to uppercase
            char upperCaseCode = cipher[upperCaseLetter - 65];
            resultedText += upperCaseCode + 32;  // convert it back to lowercase
        }
        //for non-letters
        else {
            resultedText += c;
        }
    }
    return resultedText; // return final encoded string
}


int main() {
    string text;  //to hold user input

    cout << "type a string to encode (max 128 characters plz): ";
    getline(cin, text);  //get the full line + spaces


    if (text.length() > 128) {  // for input length checking
        cout << "Brueh lower the amount of characters you are using. max is 128 characters." << endl;
        return 1;  // error out if it's too long
    }


    //call the encode function and show result.
    string resultedText = encode(text);
    cout << "Here's your encoded text: " << resultedText << endl;

    return 0;  //end the program
}
