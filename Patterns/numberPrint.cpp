#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)// outer loop ---> says number of lines
    { 
        for (j = 1; j <= n; j++) //inner loop
        {
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}