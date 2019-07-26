#include<iostream>
using namespace std;
int main()
{
int m,XOR=0,range;
cout<<"\n Enter the range  of the numbers ";
cin>>m;
range=(3*m)-1;
int a[range];
cout<<"\n Enter the data into the array ";
for(int i=0;i<range;i++)
cin>>a[i];
for(int i=0;i<range;i++)
XOR=XOR^a[i];
for(int i=1;i<=m;i++)
 XOR=XOR^i;
cout<<"\n no is "<<XOR;





    return 0;
}