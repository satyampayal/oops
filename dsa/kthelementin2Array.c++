#include <iostream>
using namespace std;
int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
 // int a[5];
  int i = 0, j = 0;
  int res=arr1[0];
  for (int t = 0; t < k; t++)
  {
    if (arr1[i] <= arr2[j])
    {
      res = arr1[i];
     // cout<<arr1[i]<<" arr1"<<endl;
      i++;
    }
    else
    {
      res= arr2[j];
      //cout<<arr2[j]<<" arr2"<<endl;
      j++;
    }
  }
  
 
  return res;
  
}
int main()
{
  // cout<<"Enter array 1 size"<<endl;
  int n;
  cin >> n;
  // cout<<"Enter array 2 size"<<endl;
  int m;
  cin >> m;

  int arr1[n];
  //  cout<<"Enter element for arr1"<<endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }
  int arr2[m];
  // cout<<"Enter element for arr2"<<endl;
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }
  // cout<<"Enter k "<<endl;
  int k;
  cin >> k;
  
  cout<<kthElement(arr1, arr2, n, m, k);
  return 0;
}