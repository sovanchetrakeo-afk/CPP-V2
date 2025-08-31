#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    ofstream outFile(filename, ios::out);
    if (outFile.is_open()) {
        outFile << "Alice 85\n";
        outFile << "Bob 92\n";
        outFile << "Jimin 100\n";
        outFile << "Kiw 200\n";
        outFile << "Austin 150\n";
        outFile.close();
    } else {
        cout << "Error opening file for writing." << endl;
        return 1;
    }
    ifstream inFile(filename);
    if (inFile.is_open()) {
        string name;
        int score;
        while (inFile >> name >> score) {
            cout << name << " " << score << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    return 0;
}