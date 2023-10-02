#include<iostream>
int main(){
 int arr[]={5,4,1,2,3};
 for(int i=1;i<5;i++){
    arr[i]=arr[i]+arr[i-1];

 }

 for(int item:arr){

     std::cout<<item<<" ";
 }
    return 0;
}