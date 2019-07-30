#include<iostream>
using namespace std;
int main()
{
int m,XOR,rightbit,x=0,y=0;
cout<<"\n Enter the range of the array ";
cin>>m;

int a[m+2];
cout<<"\n Enter data into the array ";
for(int i=0;i<m+2;i++)
cin>>a[i];
XOR=a[0];
for(int i=1;i<m+2;i++)
XOR=XOR^a[i];
for(int i=1;i<=m;i++)
XOR=XOR^i;
rightbit=XOR&~(XOR-1);
for(int i=0;i<m+2;i++)
{
    if(a[i]&rightbit)
    x=x^a[i];
    else
    y=y^a[i];
    
}
for(int i=1;i<=m;i++)
{
if(i&rightbit)
x=x^i;
else
y=y^i;

}
cout<<"\n two numbers are  "<<x<<" "<<y;


    return 0;
}