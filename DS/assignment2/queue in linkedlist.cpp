#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int x;
    Queue *head =NULL,*next ;
public:
    
   void push()
 {
    if (head==NULL)
    {
    Queue *n= new Queue();
     cin >> n->x ;
     n->next = head;
     head=n;
    }
    else
{
    Queue *n=new Queue();
     cin >> n->x;

     Queue *temp= head;

      while(temp->next!=NULL) temp = temp->next;

      temp->next=n;
      n->next=NULL;
}
 }
 void Front ()
    {
        cout << head->x << endl;
    }
    void Back()
    {
       Queue *temp=head;
       while(temp->next!=NULL) temp=temp->next;
       cout << temp->x << endl;

    }
    void pop()
    {
       if (head==NULL)
            cout <<"list is empty"<< endl;
    else
    head= head-> next;
    }
    void Size()
 {
     Queue *c=head;
     int S=0;
     do
     {   S++;
         c= c-> next;


     }
     while(c!=NULL);

     cout << S << endl;
 }

  void visit()
 {
     Queue *c=head;
     do
     {
         cout << c->x << " ";

         c= c-> next;

     }

     while(c!=NULL);
      cout << "\n";
 }

};
int main()
{
    Queue qu;

    qu.push();
    qu.push();
    qu.push();
    qu.visit();
    qu.pop();
    qu.visit();
    qu.Size();
    return 0;
}



