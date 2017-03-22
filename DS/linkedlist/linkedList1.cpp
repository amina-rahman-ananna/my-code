#include<bits/stdc++.h>
using namespace std;

 class List
 {
   public:
       int a;
       List *next;
 };
 int main ()
 {
     List *p = new List();  // creating something new
     p-> a= 20;
     List *q = new List();
     q-> a= 30;
     p-> next =q;
     q-> next = NULL;

     cout << p->a << endl;
     p= p->next;
     cout << p->a << endl;
     return 0;

 }
