#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    
    for (i = 0; i <= n-1; i++)// outer loop ---> says number of lines
    { char ch = 'A'; //for starting from A each time || We set this inside the loop because we want the first iteration would repeat in every first line
        for (j = 0; j <= n-1; j++) //inner loop
        {
            cout <<ch <<" ";
            ch = ch + 1; //type convertion for increasing ASCII value for the next character
        }
        cout << endl;
    }
    return 0;
}