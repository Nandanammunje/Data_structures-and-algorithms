#include<iostream>
using  namespace std;


int search(int a[],int m,int first,int last)
{
    int mid=0;
first=0;
last=m-1;
while (first <=last)
{
    if(first==last)
    return a[first];
    else if(first==last-1)
    return max(a[first],a[last]);
    else
    {
        mid=first+(last-first)/2;
        
        if(a[mid]>a[mid-1] && a[mid] >a[mid+1])
        return a[mid];
        else if(a[mid] > a[mid-1] && a[mid] <a[mid+1])
        first=mid+1;
        else if(a[mid-1] > a[mid] && a[mid]>a[mid+1])
        last=mid-1;
         else
           return 0;
        
    }
    
    
    
}







}





int main()
{
    int x=0;
int m,data;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the bitonic data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
x=search(a,m,0,m-1);
if(x)
cout<<"\n The data at the bitonic index is "<<x;
else
{    cout<<"\n Entered data is not  bitonic ";
}








    return 0;
}