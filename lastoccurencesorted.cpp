#include<iostream>
using namespace std;
         int lastoccurence(int a[],int m,int low,int high,int data)
         {
          
          if(high >=low)
          {
              int mid=low+(high-low)/2;
             if(a[mid]==data && (a[mid+1]!=data||mid==m-1))
             return mid;
             else if(a[mid]==data && a[mid+1]==data)
             return lastoccurence(a,m,low+1,high,data);
             else if(a[mid] > data)
              return lastoccurence(a,m,low,mid-1,data);
              else
              return lastoccurence(a,m,mid+1,high,data);
                        }
  return -1;
                           


         }
    int main()
    {
      int m,data,x;
      cout<<"\n Enter the size of the array ";
      cin>>m;
      int a[m];
      cout<<"\n Enter Sorted data into the array ";
      for(int i=0;i<m;i++)
      cin>>a[i];
      cout<<"\n Enter the data to search ";
      cin>>data;
          x=lastoccurence(a,m,0,m-1,data);
          if(x==-1)
          cout<<"\n No not found ";
          else
               cout<<"\n last occurence of the number is at "<<x<<" position";
          







        return 0;
    }
