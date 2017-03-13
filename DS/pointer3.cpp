#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10, *b , **c;  // *b is a pointer it can save adress not value
    cout << a << " " << &a << endl;   // &== adress

    b= &a;
    cout << b << " " << &b<< " " << *b <<endl;
     c= &b;
    cout << c << " " << &c << " " << *c << " " << **c <<endl;


    return 0;
}
