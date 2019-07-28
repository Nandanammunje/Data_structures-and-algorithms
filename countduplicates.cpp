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
int lastoccurence(int a[],int size,int low,int high,int data)
{
int mid=low+(high-low)/2;
if(high >= low)
{
    if(a[mid]==data && (a[mid+1]!=data||mid==size-1))
    {
        return mid;
    }
  else if(a[mid]==data && a[mid+1]==data)
  return lastoccurence(a,size,low,high+1,data);
  else if(a[mid] > data)
  return lastoccurence(a,size,low,mid-1,data);
  else
   return lastoccurence(a,size,mid+1,high,data);
  

}
return -1;
}

int main()
{
    int m,data;
    cout<<"\n Enter the size of the array ";
    cin>>m;
    int a[m];
    cout<<"\n Enter the sorted data into the array ";
    for(int i=0;i<m;i++)
    cin>>a[i];
    cout<<"\n Enter the no to check for occurences ";
   cin>>data;


  
    int x=firstoccurence(a,0,m-1,data);
    
    int y=lastoccurence(a,m,0,m-1,data);
       cout<<"\n number occured  "<<(y-x+1);
    






    return 0;
}