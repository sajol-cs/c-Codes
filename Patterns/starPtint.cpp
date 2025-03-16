#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)// outer loop
    { 
        for (j = 1; j <= n; j++) //inner loop
        {
            cout << " * " <<" ";
        }
        cout << endl;
    }
    return 0;
}