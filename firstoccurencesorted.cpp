#include<iostream>
using namespace std;

int firstoccurence(int a[],int low,int high,int data)
{
if(high >=low)
{
int mid=low+(high-low)/2;
if(a[mid]==data && (a[mid-1]!=data ||mid==0))
return mid;
if(a[mid]==data && a[mid-1]==data)
return firstoccurence(a,low,high-1,data);

else if(a[mid] >data)
return firstoccurence(a,low,mid-1,data);
else
return firstoccurence(a,mid+1,high,data);


}


return -1;

}
int main()
{
int m,data,x;
cout<<"\n Enter the size of the array ";
cin>>m;
cout<<"\n Enter sorted  data into the array ";
int a[m];
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter the data to search ";
cin>>data;
x=firstoccurence(a,0,m-1,data);
if(x==-1)
cout<<"\n No not found ";
else
cout<<"\n No found at "<<x;




    return 0;
}