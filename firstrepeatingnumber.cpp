#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
int m,min,repeat=0;

unordered_map<int,int> umap;
unordered_map<int,int>::iterator p;
cout<<"\n enter the size of the array ";
cin>>m;
min=m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=0;i<m;i++)
{
    p=umap.find(a[i]);
    if(p==umap.end())
    {
        umap[a[i]]=i;
    }
    else
    {
        repeat=1;
         if(min > p->second)
         {
             min=p->second;
         }  
    }
    
}
if(repeat)
cout<<"\n The first repeating element is "<<a[min];
else
cout<<"\n no element is repeating ";



return 0;
}