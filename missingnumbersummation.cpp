#include<iostream>

using namespace std;
int main()
{
int m;
cout<<"\n enter the range of numbers ";
cin>>m;
int a[m];
for(int i=0;i<m;i++)
a[i]=0;
cout<<"\n Enter data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
int sum=(m*(m+1))/2;
for(int i=0;i<m;i++)
sum=sum-a[i];
if(sum)
cout<<"\n missing number is "<<sum;
else
cout<<"\n all numbers are present  ";





    return 0;
}