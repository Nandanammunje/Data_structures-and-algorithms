#include<iostream>
using namespace std;
int main()
{
int m,res=0;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=0;i<m;i++)
{
 res=res^a[i];
}
cout<<"\n element occuring odd number of times is "<<res;



    return -1;
}