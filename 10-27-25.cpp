// 10-27-25.cpp : 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!\n";
    
    string line;
    string fname;//file name
    ifstream bookInput;
    cout << "Enter the file name:";
    getline(cin, fname);

    bookInput.open(fname);
    
        while (!bookInput.eof())
        {
            getline(bookInput, line);
            cout << line << endl;
        }
    if (bookInput)
    {
        cout << "Book open";

    }

    //string line;
    //ifstream inputFile;
    //ofstream outputFile;

    //inputFile.open("file name");//open file, "file name" should be the file name
    //inputFile >> line;//processess the file
    //cout << line;
    //inputFile.close();
    


    return 0;
}

