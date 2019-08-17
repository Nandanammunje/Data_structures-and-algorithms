#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
int m,exor,x;
unordered_map<int,int>umap;
unordered_map<int,int>::iterator p;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=0;i<m;i++)
{
p=umap.find(a[i]);
if(p!=umap.end())
{
exor=a[i];
break;
}
else
{
    umap[a[i]]=1;
}

}
x=a[0];
for(int i=1;i<m;i++)
{
  x=x^a[i];
}
for(int i=1;i<=m;i++)
x=x^i;
x=x^exor;
cout<<exor<<"\n";
cout<<x;
return 0;
}