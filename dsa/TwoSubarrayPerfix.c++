#include<iostream>
#include<vector>
using namespace std;
bool perfixsuffixSum(vector<int> &v){
   int sum=0;
     for(int i=0;i<v.size();i++){
      sum+=v[i];       
    }
    int perfix_sum=0;
    int idx=-1;
    for(int i=0;i<v.size();i++){
      perfix_sum+=v[i];
      int suffixSum=sum - perfix_sum;
      if(perfix_sum==suffixSum){
        return true;
      }
    }
    return false;
}
int main(){
    // int n;
    // cin>>n;
    // std::vector<int> v;
    // cout<<"enter array element";
    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
     vector<int> v{1,2,3};

    cout<<perfixsuffixSum(v);
   



    

    return 0;
}