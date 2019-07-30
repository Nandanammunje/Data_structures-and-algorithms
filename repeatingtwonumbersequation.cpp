#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
    int fac=1;
for(int i=2;i<=n;i++)
{
    fac=fac*i;
}
return fac;


}
int main()
{
int m,sum=0,first=1;
cout<<"\n Enter the range of numbers ";
cin>>m;
int a[m+2];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m+2;i++)
cin>>a[i];
for(int i=0;i<m+2;i++)
sum=sum+a[i];
sum=sum-((m*(m+1))/2);
int product=fact(m);
for(int i=0;i<m+2;i++)
first=first*a[i];
product=first/product;
int diff=sqrt(pow(sum,2)-(4*product));
int x=sum+diff;
int y=sum-diff;
cout<<"\n the two numbers are  "<<x/2<<"  "<<y/2;


    return 0;
}