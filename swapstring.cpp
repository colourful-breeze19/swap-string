// swapping two strings

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2;

    cout<<"enter 1st string \n";
    cin>>str1;
    cout<<"enter 2nd string \n";
    cin>>str2;
    cout<<"string before swapping \n";
    cout<<" string 1="<<str1;
    cout<<"\n string 2="<<str2;

str1.swap(str2);
cout<<"\n after swapping";
cout<<"\n string 1 ="<<str1;
cout<<"\n string 2 ="<<str2;

return 0;
}
