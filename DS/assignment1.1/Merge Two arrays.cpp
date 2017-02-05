#include<bits/stdc++.h>
using namespace std;

int main() {
 int arr1[30], arr2[30], res[60];
 int i, j, k, n1, n2;

 cout<< "Enter no of elements in 1st array :"<< endl;
 cin >>n1;
 for (i = 0; i < n1; i++) {
 cin >> arr1[i] ;
 }

 cout << "Enter no of elements in 2nd array :" << endl;
 cin >> n2;
 for (i = 0; i < n2; i++) {
 cin >> arr2[i];
 }

 i = 0;
 j = 0;
 k = 0;

  while (i < n1 && j < n2) {
 if (arr1[i] <= arr2[j]) {
 res[k] = arr1[i];
 i++;
 k++;
 } else {
 res[k] = arr2[j];
 k++;
 j++;
 }
 }

 while (i < n1) {
 res[k] = arr1[i];
 i++;
 k++;
 }

 while (j < n2) {
 res[k] = arr2[j];
 k++;
 j++;
 }

 cout << "Merged array is :";
 for (i = 0; i < n1 + n2; i++)
 cout << res[i] ;

 return 0;

}
