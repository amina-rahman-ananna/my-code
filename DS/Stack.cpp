#include<bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int S[500],t;
public:
    Stack()
    {
        t=0;
    }
    void push (int x)
    {
        S[t++]= x;
    }
    void pop()
    {
       if (t==0) cout << "Operation is not valid!" << endl;
       else cout <<"Deleted :: " << S[--t] << endl;
    }
    void top()
    {
        if(t==0) cout <<"Stack is empty!" << endl;
        else cout << "last element : " << S[t-1] << " ";
    }
    void Size ()
    {
        cout << "Size :: " << t << endl;
    }
};

int main()
{
    Stack st;
    st.push(20);
    st.push(18);
    st.push(50);

    st.pop();
    st.pop();
    st.pop();
    st.pop();


    st.top();
    st.push(25);
    st.top();
    st.Size();


 return 0;
}


