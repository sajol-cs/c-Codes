#include<iostream>
using namespace std;


int main()
{
   int n;
   cout<<"Enter number to check: ";
   cin>>n;
   if(n % 2 == 0){
    cout<<"Positive number\n";
   }else{
    cout<<"Negative number";
   }
   return 0;

}