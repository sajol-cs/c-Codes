#include<iostream>
using namespace std;


int main()
{
   int n;
   cout<<"Enter the number n: "; 
   cin>>n;
   int oddSum = 0;
   
    for(int i = 1; i<=n; i = i+2){
        cout<<i<<" "<<endl; //Show the numbers;
        
        oddSum+=i; //sum = sum + i;
    }
    cout<<"Odd sum is: "<<oddSum;
    
     
   return 0;
}

