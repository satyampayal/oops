#include<iostream>
#include<vector>
using namespace std;
   vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int i=0,t=0,max=arr[0];
        int temp=k;
        vector<int> arr_max(n-k+1);
        while(i!=(n-k+1)){
            if(temp!=0){
                if(arr[t]>=max){
                    max=arr[t];
                    arr_max[i]=max;
                    if(i==6)
                   { cout<<arr_max[i]<<" ";}
                }
               t++;
               temp--;
            }
            else{
                i++;
                temp=k;
                t=i;
                max=arr[i];
            }
            
        }
        return arr_max;
        
    }

int main(){
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int k;
   cin>>k;
   vector<int> arr2(max_of_subarrays(arr,n,k));
   cout<<endl;
   for(int item:arr2){
    cout<<item<<" ";
   }

    return 0;
}