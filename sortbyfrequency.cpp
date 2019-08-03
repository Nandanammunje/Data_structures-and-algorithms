#include<iostream>
#include<unordered_map>
using namespace std;
struct node
{
int data;
int count;
struct node *next;


};
void createnode(struct node **head,int data ,int count,struct node **tail)
{
struct node *q,*r;
if(*head==NULL)
{
q=(struct node*)malloc(sizeof(struct node));
q->data=data;
q->count=count;
q->next=NULL;
*tail=q;
*head=q;
return;
}
else
{
    r=(struct node*)malloc(sizeof(struct node));
    r->data=data;
    r->count=count;
    r->next=NULL;
    (*tail)->next=r;
    *tail=r;
}
}
void split(struct node *head,struct node **front,struct node **back)
{
struct node *fast,*slow;
slow=head;
fast=slow->next;
while(fast)
{
    fast=fast->next;
    if(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
        }
        }
}



void sortfrequency(int a[],int m)
{
unordered_map<int,int> umap;
for(int i=0;i<m;i++)
{
if(umap.find(a[i])!=umap.end())
{
umap[a[i]]++;
}
else
{
umap[a[i]]=1;
}
}
struct node *p,*q;
p=NULL;
q=NULL;
for(auto x:umap)
createnode(&p,x.first,x.second,&q);
}

int main()
{
int m;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into array ";
for(int i=0;i<m;i++)
cin>>a[i];

sortfrequency(a,m);



}
