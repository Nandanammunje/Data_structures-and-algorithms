#include<iostream>
using namespace std;


int main()
{
int m,XOR;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
XOR=a[0];
for(int i=1;i<m;i++)
XOR=XOR^a[i]^i;
XOR=XOR^m;
cout<<m;


    return 0;
}