#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int x;
    Stack *head =NULL,*next ;
public:
    
   void push()
 {
    if (head==NULL)
    {
    Stack *n= new Stack();
     cin >> n->x ;
     n->next = head;
     head=n;
    }
    else
{
    Stack *n=new Stack();
     cin >> n->x;

     Stack *temp= head;

      while(temp->next!=NULL) temp = temp->next;

      temp->next=n;
      n->next=NULL;
}
 }

    void Back ()
    {
        cout << head->x << endl;
    }

    void Front()
    {
       Stack *temp=head;
       while(temp->next!=NULL) temp=temp->next;
       cout << temp->x << endl;

    }
    void pop()
    {
       if (head==NULL)
            cout <<"list is empty"<< endl;
            else
            {
                Stack *temp=head,*prev=NULL;
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
     Stack *c=head;
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
     Stack *c=head;
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
    Stack st;

    st.push();
    st.push();
    st.push();
    st.visit();
    st.pop();
    st.visit();
    st.Size();
    return 0;
}


