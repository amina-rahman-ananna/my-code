#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char a[100];
    int c=0;
    while (cin >>a)
    {
      c++;
      if (strcmp(a,"#")==0 ) break;
      
      if (strcmp(a,"HELLO")==0 ) cout << "Case " << c << ": ENGLISH" << endl;
      else if (strcmp(a,"HOLA")==0 ) cout << "Case " << c << ": SPANISH" << endl;
      else if (strcmp(a,"HALLO")==0 ) cout << "Case " << c << ": GERMAN" << endl;
      else if (strcmp(a,"BONJOUR")==0 ) cout << "Case " << c << ": FRENCH" << endl;
      else if (strcmp(a,"CIAO")==0 ) cout << "Case " << c << ": ITALIAN" << endl;
      else if (strcmp(a,"ZDRAVSTVUJTE")==0 ) cout << "Case " << c << ": RUSSIAN" << endl;
      else cout << "Case " << c << ": UNKNOWN" << endl;
      
      
    }
 
    return 0;
 
}
