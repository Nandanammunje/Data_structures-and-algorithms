#include<iostream>
#include<list>
#include<iterator>
using namespace std;
#define LOAD_FACTOR 20 
  
struct ListNode
{
int key;
int data;
struct ListNode *next;
};
