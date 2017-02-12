
#include<bits/stdc++.h>

using namespace std;

void Bubble_sort(int arr[],int n)
{
 for(int i=1;i<n;i++)
 {
  for(int j=0; j<n-1; j++)
   {

    if(arr[j]>arr[j+1]){

      swap(arr[j],arr[j+1]);
      }
    }
  }

}
bool binary_search(int arr[], int n, int key)
{
  int lo=0 , hi=n-1;
  while(lo<=hi){

  int mid=(lo+hi)/2;
  if(arr[mid]==key) return true;
  else if(arr[mid]<key)  lo=mid+1;
  else hi=mid-1;
  }

return false;

}

int main()
{

 int arr[100], n, key;
 cin>>n;

 for(int i=0; i<n; i++)
 cin>> arr[i];
 cin>>key;
 //Bubble_sort(arr,n);
//sort(arr,arr+m)
sort(&arr[0],&arr[n]); //algorithm.h

bool ok = binary_search(arr,n,key);
if(ok==true)puts("Yes");
else puts("No");

}

