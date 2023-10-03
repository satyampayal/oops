#include<iostream>
#include<vector>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
       int sol= n*fact(n-1);
       return sol;
    }
    
}
int main(){
    cout<<"Enter the n size";
    int n; cin>>n; 
   // cout<<fact(0)/(fact(0)*fact(0));
    vector<vector<int>> v(n);// size toh dena hoga kase hoga--->> no of rows we know 
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           int value=fact(i)/(fact(j)*fact(i-j));
        //   cout<<value<<" ";
          v[i].resize(i+1);//har row ka kiya size hoga 
          v[i][j]=value;
        }
        //cout<<endl;
    }
    //cout<<v[1][1];


     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}