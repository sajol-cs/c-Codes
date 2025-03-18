//Reverse a number.
#include<iostream>>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int reverse = 0;
    int lastDigit;
    while(n>0){
        lastDigit = n%10;
        reverse = reverse * 10 + lastDigit;
        n = n/10; // Removing the last digit
    } 
    cout<<"The reversed number is: "<<reverse;
    return 0;
}