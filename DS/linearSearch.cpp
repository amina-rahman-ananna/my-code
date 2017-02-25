#include <iostream>
using namespace std;
int arr[100];
int main()
{
    int n,m,i;
    bool found = false;

    cout<<"Array size: ";
    cin>>n;

    cout<<"Elements: ";
    for(i=0;i<n;i++) cin>>arr[i];

    cout<<"Search for: ";
    cin>>m;

    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            found=true;
            break;
        }
    }

    if(found) cout<<"Found";
    else cout<<"Not found";
}
