#include<iostream>
using namespace std;

void shellsort(int a[],int m)
{
    int temp,j;
for(int gap=m/2;gap >0;gap=gap/2)
{
for(int i=gap;i<m;i++)
{
    temp=a[i];
    for(j=i;a[j]<a[j-gap]&j>=gap;j=j-gap)
    a[j]=a[j-gap];
    a[j]=temp;
}


}

}
int main()
{
int m,found=0;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
shellsort(a,m);
for(int i=0;i<m;i++)
{

if(i+1!=a[i])
{
    found=1;
cout<<"missing no is "<<i+1;
}

}
if(found==0)
cout<<"\n There are no missing numbers ";





    return 0;
}