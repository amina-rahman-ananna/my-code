#include<iostream>

using namespace std;

int main()
{
    string sss;
    int cnt = 1;
    while(cin >> sss)
    {
        if(sss == "*")
            break;
        if(sss == "Hajj")
            cout << "Case " << cnt <<": Hajj-e-Akbar" <<endl;
        else if(sss == "Umrah")
            cout<< "Case " << cnt <<": Hajj-e-Asghar" <<endl;
        cnt++;
    }
    return 0;
}
