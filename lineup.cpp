#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;

    string student, 
           first, 
           last;

    // Open the file LineUp.txt
    inputFile.open("LineUp.txt");

    if (inputFile)
    {
        // Process the file and get the first student in line and the last student in line
        inputFile >> student;

        first = last = student;

        while (inputFile >> student)
        {
            if (student < first)
                first = student;

            if (student > last)
                last = student;
        }

            // Close File
            inputFile.close(); 
    }
    else
    {
        // Display an error message
        cout << "Error opening file." << endl;
    }
// Display the first and last student in line
    cout << "First student in line = " 
         << first << endl;

    cout << "Last student in line  = " 
         << last << endl << endl;
//was not able to code the program to count the number of students in the class
  //only had a vague idea how to do so
    return 0;
}
