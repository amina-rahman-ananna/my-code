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
        
    head= head->next;
    
    }
    void deleteBack()
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
};
int main()
{
    Deque d;
    d.addFront (10);
    d.Front();
    return 0;
}

