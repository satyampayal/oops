#include<iostream>
#include<vector>
using namespace std;

int main(){
    int r; cin>>r;
    int c;cin>>c;
     vector<vector<int>> v(r,vector<int>(c));

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
     }
     int maxones=INT8_MIN;
     int idx=-1;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(v[i][j]==1){
            int oneCount=c-j;
            if(oneCount>maxones){// 3> -182
                maxones=oneCount;// mxOnes=3;
                idx=i; // row=0;
            }
            break;
           }
        }
     }
     cout<<"Max with Zeroes is "<<idx;



    return 0;
}