#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
//input values for user to enter
    float start = 0,
        avg = 0,
        days = 0;
//next values are used for calculations
    float realavg, total, inc;

    cout << "What is the starting number of organisms?" << endl;
    cin >> start;

    while (start < 2) {
//if user enters a value less than 2, it will prompt them to enter a new value
        cout << "Error: Value Less Than 2." << endl;
        cout << "Starting number of organisms?" << endl;
        cin >> start;   

    }    

    cout << "What is their average daily population increase (as a percentage)?" << endl;
    cin >> avg;

    while (avg < 2) {
//if user enters a value less than 2, it will prompt them to enter a new value
        cout << "Error: Negative Value." << endl;
        cout << "What is their average daily population increase (as a percentage)?" << endl;
        cin >> avg;   

    }        

    cout << "What is the amount of days they will multiply for?" << endl;
    cin >> days;

    while (days < 1) {
//if user enters a value less than 1, it will prompt them to enter a new value
        cout << "Error: Value less than 1." << endl;
        cout << "What is the amount of days they will multiply for?" << endl;
        cin >> days;  

    }      
//this is the loop that will calculate the population for each day
    for (int i = 1; i <= days; i++) {

        if (total == 0) {
            total = start;
        }

        realavg = avg/100;

        inc = (total * realavg);
        total += inc;

        cout << "Day " << i << "'s population = " << total << endl;

    }

    return 0;
}
