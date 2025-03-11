#include<iostream>
using namespace std;


int main()
{
 int marks;
 cout<<"Enter Marks: ";
 cin>>marks;
 if(marks>=90){
    cout<<"Your Grade is A+";
 }else if (marks>=80 && marks<90)
 {
    cout<<"Your Grade is A";
 }else if (marks>=70 && marks<80)
 {
    cout<<"Your Grade is A-";
 }else if (marks>=60 && marks<70)
 {
    cout<<"Your Grade is B";
 }else if (marks>=50 && marks<60)
 {
    cout<<"Your Grade is C";
 }else if (marks>=40 && marks<50)
 {
    cout<<"Your Grade is D";
 }else{
    cout<<"Fail";
 }
 
 
}

