#include<iostream>
#include<vector>
using namespace std;
void alternate1(int*  arr,int n){
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
void alternate2(int arr[],int n){
    int min_idx=0;
    int max_idx=n-1;
    int max=arr[n-1] +1;
    for(int i=0;i<n;i++){
        if(i%2==0){
        arr[i]=(arr[max_idx]%max)*max + arr[i];
        max_idx--;
        }
        else{
        arr[i]=(arr[min_idx]%max)*max + arr[i];
        min_idx++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]/max<<" ";
    }
}

int main(){
     int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
//alternate2(arr,n);
   alternate1(arr,n);
   for(int i:arr){
    cout<<i<<" ";
   }
    return 0;
}