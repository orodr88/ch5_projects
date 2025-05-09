#include <iostream>
using namespace std;
int main()
{
    // Pattern A and B using nested loops
    const int MIN = 0,
              MAX = 10;

    char symbol = '+';
// Pattern A implemented from iostream
    cout << "\nPatter A: " << endl;

    for(int i = MIN; i < MAX; i++)
    {
        for(int j = MIN; j <= i; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
// Pattern B implemented from iostream
    cout << "\nPatter B: " << endl;
    for(int i = MIN; i < MAX; i++)
    {
        for(int j = MAX; j > i; j--)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}
