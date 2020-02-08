#include<iostream>
#include <list>
#include <iterator>
using namespace std;
class Hash
{
int Bucket;
list<int> *table;
public:
Hash(int V);
void insert(int x);
void deleteItem(int item);
int hashfunction(int x)
{
    return (x%Bucket);
}
void displayHash();
};
Hash::Hash(int b)
{
this->Bucket=b;
table=new list<int>[Bucket];
}
 void Hash::insert(int x)
 {
   int index=hashfunction(x);
    table[index].push_back(x);

 }

void Hash::deleteItem(int key)
{
int index=hashfunction(key);
list <int> :: iterator i;
for(i=table[index].begin();i!=table[index].end();i++)
{
if(*i == key)
break;
}
if(i!=table[index].end())
table[index].erase(i);

}
void Hash::displayHash()
{
    for(int i=0;i<Bucket;i++)
    {
        cout<<i;
        for(auto x:table[i])
        {
            cout<<"-->"<<x;
            cout<<endl;
        }
    }
}
int main()
{
int m,delno;
cout<<"\n enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the  data into the array ";
for(int i=0;i<m;i++)
{
cin>>a[i];
}
Hash h(m+2);
for(int i=0;i<m;i++)
h.insert(a[i]);
cout<<"\n Enter the element to delete";
cin>>delno;
h.deleteItem(delno);
h.displayHash();
return 0;
}
