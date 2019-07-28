#include<iostream>
using namespace std;

void swap(int * a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;

}

void oddeven(int a[],int m)
{
int low=0,high=m-1;

while(high > low)
{

while (a[low]%2==0 && high>low)
low++;
while (a[high]%2==1 && high>low)
high--;
if (low<high)
{
    swap(&a[low],&a[high]);
    low++;
    high--;
}





}





}

int main()
{
int m;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];


oddeven(a,m);
cout<<"\n segregated array  ";
for(int i=0;i<m;i++)
cout<<a[i]<<"  ";




    return 0;
}