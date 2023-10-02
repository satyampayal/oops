#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void rotateArray(vector<int> &v,int start,int end){
 while(start<end){
  int temp=v[start];
  v[start]=v[end];
  v[end]=temp;
  start++;
  end--;
 }
 return ;
}
int main(){
    // cout<<"Enter Array Size";
    // int size; cin>>size;
   std::vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
//    cout<<"Enter array element";
//    for(int i=0;i<size;i++){
//     cin>>v[i];
//    }
  // std::cout <<"Enter k value ";
   int k=2; //std::cin>>k;

      
    rotateArray(v,0,v.size()-1);
    rotateArray(v,0,k-1);
    rotateArray(v,k,v.size()-1);


   for(int item:v){
    cout<<item <<" ";
   }


    

// using inbuilt method
  //  std::reverse(v.begin(),v.end());
  //  std::reverse(v.begin()+k,v.end());
  //  std::reverse(v.begin(),v.end()+k);
    return 0;
}