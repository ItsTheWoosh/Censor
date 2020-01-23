#include <iostream>
#include <fstream>

using namespace std;

bool isLetter(char s) {
    if (s >= 65 && s <= 90 && s >= 97 && s <= 122) {
        return true;
    } else return false;
}
int main(){
    ofstream outFile("outputFile.txt");
    ifstream inFile("inputFile.txt");
    int index; //goes up with each letter that is read
    int pos;
    int aryMax = 5;
    int letters;
    int fours[5];
    string temp;
    char oneLetter, twoLetter, threeLetter, fourLetter, fiveLetter;

    char symbol;

    if (inFile.fail()) cout << "Sorry but could not open the input file." << endl;

    cout << "Welcome lmao" << endl;
    //outFile << "It is raining outside.";

    inFile >> symbol;
    cout << "The first character in the file is: " << symbol << endl;

    while (inFile.get(symbol)) {
            index++;
            temp = temp + symbol;
        if (isLetter(symbol)) {
            letters = 0;
            index = 0;
            pos = 0;
            outFile << temp;
            temp = "";
        } else if (symbol == ' ') {

        }
    }
    return 0;
}
