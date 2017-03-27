#include<bits/stdc++.h>
using namespace std;

 class List
 {
   public:
       int a;

       List *next , *prev;
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
             head->prev =NULL;
         }
         else
         {
             List *q = new List();
             cin >> q->a;
             temp->next =q;
             q->prev =temp;
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
 int main ()
 {
    Create(3);
    visit();
     return 0;

}
