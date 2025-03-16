#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    int num = 1; //We set it here because we don't want number reset again that's why we set this variable outside the loop
    
    for (i = 0; i <= n-1; i++)// outer loop ---> says number of lines
    { 
        for (j = 0; j <= n-1; j++) //inner loop || Will print the logic
        {
            cout <<num <<" ";
            num = num +1; //num++;
        }
        cout << endl;
    }
    return 0;
}