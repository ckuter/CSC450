#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void reverseWords(string &line)
{
    int n = line.length();
    for (int i = 0; i < n / 2; i++)
        swap(line[i], line[n - i - 1]);
}

int main()
{
    string line;
    string userInput;
    string theName = "Clarissa";
    ofstream write2File;

    cout << "Welcome to the User Input Program!" << endl
         << endl;
    cout << "In this program, we will be asking for your input to add to our file." << endl;
    cout << "We will then reverse the text and output it to a new file. :)" << endl
         << endl;

    cout << "Please input a line to add to our file!" << endl;
    getline(cin, userInput);

    write2File.open("CSC450_CT5_mod5.txt", ios::app);
    write2File << "\n"
               << userInput << "\n";
    write2File.close();

    cout << endl
         << "\"" << userInput << "\" has successfully been added to our file." << endl;
    cout << "We will now reverse all of the characters in the file.";

    ofstream reversedFile("CSC450-mod5-reverse.txt");
    ifstream readFile("CSC450_CT5_mod5.txt");
    while (readFile)
    {
        getline(readFile, line);
        reverseWords(line);
        reversedFile << line << endl;
    }

    reversedFile.close();
    readFile.close();

    cout << endl
         << endl
         << "The text has been reversed and output to a file called CSC450-mod5-reverse.txt!" << endl;
    cout << "Enjoy your new file. :)" << endl
         << "Goodbye.";

    return 0;
}
