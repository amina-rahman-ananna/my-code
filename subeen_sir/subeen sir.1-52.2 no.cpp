#include<iostream>
using namespace std;
int main()
{
int t;
char s[101];

cin >> t;
  for (int i=1;i<=t;i++){
        cin >> s;
  int l=strlen(s);
  if (s[l-1]%2==0)
    cout <<"even" << endl;
  else
    cout <<"odd" << endl;
  }

return 0;
}
