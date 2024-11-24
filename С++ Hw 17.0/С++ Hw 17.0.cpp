#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string text = "AAAAAAAAALorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    ofstream outFile("users.txt", ios::app);
    outFile << text << endl;
    outFile.close();
    ifstream inFile("users.txt");
    string line;
    while (getline(inFile, line)) {
        for (char& chekingLol : line) {
            if (chekingLol == 'A') {
                chekingLol = 'X';
            }
        }
        cout << line;
    }
    inFile.close();
}