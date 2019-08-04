#include<iostream>
using namespace std;

void shellsort(int a[],int m)
{
    int key,j;
for(int gap=m/2;gap>0;gap=gap/2)
{
    for(int i=gap;i<m;i++)
    {
        key=a[i];
           for(j=i;j>=gap&&a[j-gap]>key;j=j-gap)
           a[j]=a[j-gap];
           a[j]=key;

    }



}
}
int intersearch(int a[],int data,int low,int high)
{
int pos=low+(((double)(high-low)/(a[high]-a[low])*(data-a[low])));

 if(low <high && a[low]<=data &&a[high]>=data)
 {
if(a[pos]==data)
{
    return 1;
}
if(low==high)
{
if(a[low]==data)
return 1;


}
else if(a[pos] > data)
{
    intersearch(a,data,low,pos-1);
}
else if(a[pos] < data)
{
    intersearch(a,data,pos+1,high);
}
 }
else
{
    return 0;
}






}
int main()
{
int m,data;
cout<<"\n Enter the size of array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter the data to be searched ";
cin>>data;
shellsort(a,m);
cout<<intersearch(a,data,0,m-1);




    return 0;
}