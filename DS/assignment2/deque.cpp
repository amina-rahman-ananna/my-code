#include <bits/stdc++.h>
using namespace std;

class Deque
{
private:
    int x;
    Deque *head =NULL,*next ;
public:
    void addFront(int q)
    {
        Deque *p=new Deque();
        p->x=q;
        p->next =head;
        head=p;
    }
    void Front ()
    {
        cout << head->x << endl;
    }
    void addBack(int q)
    {
        Deque *temp =head ,*p=new Deque ();
        while (temp ->next !=NULL)
            temp= temp->next;
        p->x=q;
        p->next=NULL;
        temp->next =p;

    }
    void Back()
    {
       Deque *temp=head;
       while(temp->next!=NULL) temp=temp->next;
       cout << temp->x << endl;

    }
    void deleteFront()
    {
     if(head==NULL) cout << "empty" << endl;
     else
    head= head->next;

    }
    void deleteBack()
    {
       if (head==NULL)
            cout <<"list is empty"<< endl;
            else
            {
                Deque *temp=head,*prev=NULL;
        while (temp->next!=NULL)
        {
            prev=temp;
            temp =temp->next;
        }
        prev ->next =NULL;
        temp=NULL;
        }
    }
    void Size()
 {
     Deque *c=head;
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
     Deque *c=head;
     do
     {
         cout << c->x << " ";
         c= c-> next;

     }
     while(c!=NULL);
 }

};
int main()
{
    Deque d;


    d.addFront (10);
    d.addBack(12);
    d.addBack(12);
    d.addBack(12);
    d.deleteFront();
    d.addBack(12);
    d.Size();
    d.visit();
    return 0;
}

