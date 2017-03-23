#include<bits/stdc++.h>
using namespace std;

 class List
 {
   public:
       int a;

       List *next;
 };

 List *head =NULL;
 void Create(int x)
 {

     List *temp =NULL;
     for(int i=1;i<=x;i=i+1)
     {
         if(i==1)
         {
             head=new List();
             cin >> head->a;
             temp=head;
         }
         else
         {
             List *q = new List();
             cin >> q->a;
             temp->next =q;
             temp =q;
         }
          temp->next=NULL;
     }

 }

 void visit()
 {
     List *c=head;
     do
     {
         cout << c->a << " ";
         c= c-> next;

     }
     while(c!=NULL);
 }
 void Maxnum()
 {
   int mn= INT_MIN;
   List *temp= head;
    do
    {
    if( temp->a >mn)  mn=temp ->a;
    temp= temp->next;

    }
    while(temp !=NULL);
    cout << "\n bigger one : " << mn << endl;

 }
 void Minnum()
 {
   int mn= INT_MAX;
   List *temp= head;
    do
    {
    if( temp->a <mn)  mn=temp ->a;
    temp= temp->next;

    }
    while(temp !=NULL);
    cout << "\n smaller one : " << mn << endl;

 }

 int main ()
 {
    Create(3);
    visit();
    Maxnum();
    Minnum();
     return 0;

 }
