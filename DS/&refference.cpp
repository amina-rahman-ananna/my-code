#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x=10;
    int &y=x;  //y as x will be treated && used as reference
      y=-10;
      cout << x << " " << y << endl;
    return 0;
}
