#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int m,b[2];
unordered_map<int,int> umap;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
unordered_map<int,int>:: iterator p;
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=0;i<m;i++)
{
    p=umap.find(a[i]);
    if(p==umap.end())
    {
        umap[a[i]]=1;
    }
    else
    {
        umap[p->first]=p->second+1;
    }
    


}
cout<<"\n two numbers that are repeating twice are ";

for(int i=0;i<m;i++)
{
    if(umap[a[i]]==2)
    {
        umap[a[i]]=1;
        cout<<a[i]<<"  ";
    }
    
}


    return 0;
}