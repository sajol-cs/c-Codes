#include<iostream>
using namespace std;


int main()
{
   int n;
   cout<<"Enter the number n: "; 
   cin>>n;
   int sum = 0;
   
    for(int i = 1; i<=n; i++){
        sum+=i; //sum = sum + i;
    }
    cout<<"Total sum is: "<<sum;
     
   return 0;
}

