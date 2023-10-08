#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int kthSmaallest(int arr[],int k,int n){
     priority_queue<int> pq;// by default make max heap
     for(int i=0;i<k;i++){
         pq.push(-arr[i]);
         cout<<pq.top()<<" ";
     }
     for(int i=k;i<n;i++){
        if(pq.top()>(-arr[i])){
              pq.pop();
              pq.push(-arr[i]);
         cout<<pq.top()<<" ";

        }
     }
     return abs(pq.top());

}
int main()
{
     int arr[]={7,10,4,3,20,15}  ;
   // vector<int> v{7,10,4,3,20,15};
   // sort(v.begin(),v.end());
    int k=3;
    //cout<<v[k-1]<<endl;
    int n=6;
    cout<<kthSmaallest(arr,k,n);
    return 0;
}