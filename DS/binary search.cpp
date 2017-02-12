#include<bits/stdc++.h>
using namespace std;

bool bS(int arr[],int n,int num)
{
int low=0;
int high=n-1;

while(low<=high)
{
int mid=(low+high)/2;
if (arr[mid]==num) return true;
if (arr[mid]>num) high=mid-1;
else low=mid+1;
}
return false;
}
int main()
{
int a, ar[100],number;
cout<<"number of elements"<<endl;
cin>>a;
cout<< "enter array"<< endl;
for(int i=0;i<a;i++)

cin >> ar[i];
cout<< "enter desired number"<< endl;
cin >> number;

    bool ok = bS(ar, a, number);
    if(ok==true) cout << "Yes";
    else cout << "No";
    return 0;





}
