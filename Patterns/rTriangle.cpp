#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i, j;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
    return 0;
}