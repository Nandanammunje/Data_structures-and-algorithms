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
        *front=head;
        *back=slow->next;
        slow->next=NULL;
        
}

struct node* merge(struct node *a,struct node *b)
{
struct node *result=NULL;
if(a==NULL)
return b;
else if(b==NULL)
return a;
else if(a->count > b->count)
{
    result=a;
     result->next=merge(a->next,b);
}
else if(a->count <b->count)
{
    result=b;
    result->next=merge(a,b->next);
}
else if(a->count==b->count)
{
    if(a->data > b->data)
    {
       result=a;
        result->next=merge(a->next,b);
    }
       else
       {
        result=b;
         result->next=merge(a,b->next);
       }
       
}
return result;

}
void sort(struct node **q)
{
struct node *a,*b,*head=*q;
a=NULL;
b=NULL;
if(head==NULL||head->next==NULL)
return ;
split(head,&a,&b);
sort(&a);
sort(&b);
*q=merge(a,b);
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
struct node *p,*q,*temp;
p=NULL;
q=NULL;
for(auto x:umap)
createnode(&p,x.first,x.second,&q);
sort(&p);
temp=p;
int j=0;
while(temp)
{
    for(int i=0;i<temp->count;i++)
    {
        a[j]=temp->data;
        j++;
    }
    temp=temp->next;
}
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
cout<<"\n Output array sorted according to frequency ";
 for(int i=0;i<m;i++)
cout<<a[i]<<"\n";


}
