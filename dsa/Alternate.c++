#include<iostream>
#include<vector>
using namespace std;
void alternate(int*  arr,int n){
   int i=0;
   while(i!=n-1){
    int lp=i;
    int rp=n-1;
    while(lp<rp){
        int temp=arr[lp];
        arr[lp]=arr[rp];
        arr[rp]=temp;
        lp++;
        rp--;
    }
    i++;
   }

}

int main(){
     int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   alternate(arr,n);
   for(int i:arr){
    cout<<i<<" ";
   }
    return 0;
}