#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}