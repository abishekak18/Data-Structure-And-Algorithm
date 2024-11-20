#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream dataFile("DATA.txt"); // Open DATA.txt for reading
    ofstream oddFile("ODD.txt");   // Open ODD.txt for writing
    ofstream evenFile("EVEN.txt"); // Open EVEN.txt for writing

    if (!dataFile.is_open())
    {
        cout << "Could not open DATA file." << endl;
        return 1;
    }

    int number;
    while (dataFile >> number)
    { // Read numbers from the data file
        if (number % 2 == 0)
        {
            evenFile << number << endl; // Write even numbers to EVEN.txt
        }
        else
        {
            oddFile << number << endl; // Write odd numbers to ODD.txt
        }
    }

    // Close the files
    dataFile.close();
    oddFile.close();
    evenFile.close();

    cout << "Odd and Even numbers have been written to their respective files." << endl;
    return 0;
}
