#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter value of a: ";
    cin>>a;
    int b;
    cout<<"Enter value of b: ";
    cin>>b;
    int sum = a + b;
    int difference = a - b;
    int mul = a*b;
    int division = a/b;
    cout<< "Sum is =  "<<sum <<endl;
    cout<< "Difference is =  "<<difference <<endl;
    cout<< "Multiplication is =  "<<mul <<endl;
    cout<< "Division is =  "<<division <<endl;
    return 0;
}