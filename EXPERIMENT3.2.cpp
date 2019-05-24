#include <iostream>
using namespace std;

const int PROVINCE = 3;
const int WEEK = 7;

int main()
{
    int temperature[PROVINCE][WEEK];

    cout << "Enter all temperature for a week of province A , B and then C. \n";

    // Inserting the values into the temperature array
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Province " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Province " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

    return 0;
}
