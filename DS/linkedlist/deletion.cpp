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

 void add_back()
 {
     List *n=new List();
     cin >> n->a;

     List *temp= head;

      while(temp->next!=NULL) temp = temp->next;

      temp->next=n;
      n->next=NULL;
 }

 void add_front()
 {
     List *n= new List();
     cin >> n->a ;
     n->next = head;
     head=n;
 }

  int nth_list (int x)
  {
      if(x==1) return head->a;

      List *temp= head;
      for (int i=2; i<=x && temp!=NULL; i++)
      {
          temp= temp-> next;
      }
      if (temp== NULL) return -11111;

      return temp ->a;
  }

void Delete(int x)
{
    if (x==1)
    {
        head= head->next;
        return ;
    }
    List *temp=head;
    List* prev= head;
    for (int i=2;i <=x && temp!=NULL;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    if  (temp==NULL) return;
    prev-> next= temp->next;

}
 int main ()
 {
    Create(6);
    Delete (2);
    visit();
    return 0;

}
