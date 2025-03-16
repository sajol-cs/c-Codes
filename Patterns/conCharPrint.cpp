#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    char ch = 'A'; //We set it here because we don't want number reset again that's why we set this variable outside the loop
    
    for (i = 0; i <= n-1; i++)// outer loop ---> says number of lines
    { 
        for (j = 0; j <= n-1; j++) //inner loop || Will print the logic
        {
            cout <<ch <<" ";
            ch = ch + 1; //num++;
        }
        cout << endl;
    }
    return 0;
}