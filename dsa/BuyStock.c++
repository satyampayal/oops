#include<iostream>
#include<vector>
using namespace std;
int buyStock(int arr[],int n){
    int maxProfit=0;
    int last=n-1;
    int auxArray[n];
    auxArray[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=auxArray[last]){
            auxArray[i]=arr[i];
        }
        else{
            auxArray[i]=auxArray[last];
        }
        last--;
    }
    
    for(int i=0;i<n-1;i++){
        if(auxArray[i+1]-arr[i]>maxProfit){
            maxProfit=auxArray[0]-arr[i];
        }
    }
    return maxProfit;
}
int main(){
     int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<buyStock(arr,n);
    return 0;
}