#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
 unordered_map<int,int> umap;   
int m,found=0;
cout<<"\n Enter the size of the array ";
cin>>m;
unordered_map<int,int>::iterator p;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=0;i<m;i++)
{
umap[a[i]]=1;

}

for(int i=1;i<m+1;i++)
{
    p=umap.find(i);
    if(p==umap.end())
    {
        found=1;
        cout<<"\n The missing number is "<<i;
        
    }
}
if(!found)
cout<<"\n no missing number ";
    return 0;
}