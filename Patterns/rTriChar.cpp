#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    char ch = 'A'; // Start with character 'A'

    for (i = 0; i <= n - 1; i++) // Outer loop for rows
    {
        for (j = 0; j < i + 1; j++) // inner loop for main content
        {
            cout << ch << " "; // Print character 'ch'
        }

        cout << endl;
        ch++; // Move to the next character in the alphabet
    }

    return 0;
}