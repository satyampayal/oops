#include<iostream>
#include<vector>
#include <algorithm>

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

   std::reverse(v.begin(),v.end());
   std::reverse(v.begin(),v.end()+k);
   std::reverse(v.begin()+k,v.end());

   for(int item:v){
    std::cout<<item <<" ";
   }


    

    return 0;
}