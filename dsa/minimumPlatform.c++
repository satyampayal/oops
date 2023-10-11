#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
  int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
      sort(arr,arr+n);
      sort(dep,dep+n);
    
    	int i=0,j=0;
    	int count=0,ans=0;
    	while(i<n){
    	    if(arr[i]<=dep[j]){
    	        count++;
    	        ans=max(count,ans);
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        count--;
    	        j++;
    	    }
    	}
    	return ans;
    }

int main(){
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int dep[n];
    for(int i=0;i<n;i++){
    cin>>dep[i];
   }
   cout<<findPlatform(arr,dep,n);
   

    return 0;
}