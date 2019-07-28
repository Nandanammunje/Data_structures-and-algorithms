#include<iostream>
using namespace std;

void swap(int *a,int *b)
{

int temp;
temp=*a;
*a=*b;
*b=temp;


}

void sortonezero(int a[],int m)
{
int low=0,high=m-1;
while(low < high)
{

while (a[low]==0 &&low < high)
low++;
while (a[high]==1 && low <high )
high--;
if(low < high)
{
swap(&a[high],&a[low]);
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
sortonezero(a,m);
cout<<"\n Sorted array is ";
for(int i=0;i<m;i++)
cout<<a[i]<<"  ";



    return 0;
}