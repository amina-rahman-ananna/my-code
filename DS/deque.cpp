#include<bits/stdc++.h>
using namespace std;

 class Deque
 {
     private: int arr[1000],l,h;
     public:
        Deque()
        {
            l=h=500;
        }
        void pushfront(int x)
        {
            arr[h++] = x;
        }
        void pushback( int x)
        {
            arr[--l] = x;
        }
        void popfront()
        {
            if (l==h) cout << "is empty!" << endl;
            else cout << "deleted" << arr [--h] <<endl;
        }
         void popback()
        {
            if (l==h) cout << "is empty!" << endl;
            else cout << "deleted"<< arr [l++] <<endl;
        }
        void front()
        {
            cout << arr[h-1]<< endl;
        }
        void backfront()
        {
            cout << arr[l]<< endl;
        }
        void size()
        {
            cout << h-l << endl;
        }
 };

    int main()
    {
        Deque a;
        a.pushback(10);
        a.pushback(19);
        a.pushback(3);
        a.pushback(90);
        a.pushback(34);
        a.pushfront (12);
        a.backfront();
        a.front();
        a.size();
        return 0;
    }
