#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;

    for (i = 0; i <= n-1; i++) // Outer loop for rows
    {
        for (j = i+1; j >0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}