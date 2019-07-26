#include<iostream>
using namespace std;
int interpolsearch(int a[],int n,int data)
{
int low=0,high=n,pos;
while(low <=high && data >=a[low] && data <=a[high])
{
    if(low==high)
    {

        if(a[low]==data)
        return low;
        else
        
            return -1;
            }

     pos=low+(((double)(high-low)/(a[high]-a[low]))*(data-a[low]));
  if( data==a[pos])
  return pos;
  if(data > a[pos])
  low=pos+1;
  else
  {
      high=pos-1;
  }
  
}
return -1;


}

void shellsort(int a[],int high)
{
    int key,j;
for(int gap=high/2;gap >0;gap=gap/2)
{

for(int i=gap;i<high;i++)
{
    key=a[i];
 for(j=i;j>=gap&&a[j-gap]>key;j=j-gap)
   a[j]=a[j-gap];
   a[j]=key;
}
    
}



}
int main()
{
int m,data;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter the data to search ";
cin>>data;
shellsort(a,m);
if(interpolsearch(a,m-1,data)==-1)
cout<<"\n number not found ";
else
{
    cout<<"\n number found ";
}





    return 0;
}