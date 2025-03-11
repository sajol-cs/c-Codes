#include<iostream>
using namespace std;


int main()
{
char ch;
cout<<"Enter Character: ";
cin>>ch;
if(ch >= 'a' && ch <='z'){
    cout<<"Smaller";
}else if (ch >= 'A' && ch <='Z')
{
    cout<<"Capital";
}else{
    cout<<"Invalid";
}

}

