#include<iostream>
using namespace std;
  int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        
    }
int main(){
    cout<<"Enter array 1 size"<<endl;
    int n; cin>>n;
    cout<<"Enter array 2 size"<<endl;
    int m; cin>>m;
    
  int arr1[n];
  cout<<"Enter element for arr1"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr1[i];
  }
  int arr2[m];
  cout<<"Enter element for arr2"<<endl;
  for(int i=0;i<m;i++){
    cin>>arr2[i];
  }
  cout<<"Enter k "<<endl;
  int k;
  cin>>k;
  kthElement(arr1,arr2,n,m,k);
    return 0;
}