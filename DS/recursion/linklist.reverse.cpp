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

  void Reverse (List *cur, List *prev)
  {
      if (cur== NULL)
      {
          head=prev;
          return;
      }
      Reverse (cur-> next,cur);
      cur->next= prev;
  }
 int main ()
 {
    Create(3);
    visit();
    Reverse(head,NULL);
    cout << "\n\nAfter reversing the linked list :: \n\n" << endl;
    visit();
     return 0;

}
