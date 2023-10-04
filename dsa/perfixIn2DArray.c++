#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<vector<int>> &v){
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            cout<<v[i][j]<<" ";
          sum+=v[i][j];
        }
    }
    cout<<endl<<sum;
}
int main(){
    // given matrix
    int r,c;
    cin>>r>>c;
    vector<vector<int>> v(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];

        }
    }
   // brute method 
   // prefixSum(v);

    // vector<vector<int>> a(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=1;j<c;j++){
            v[i][j]+=v[i][j-1];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     int l1,r1,l2,r2;
     cout<<"Enter l1 r1 l2 r2";
    cin>>l1>>r1>>l2>>r2;
    int row1sum;
    int row2sum;
    if(l1!=0){
         row1sum=v[l1][r2]-v[l1][l1-1];
     row2sum=v[l2][r2]-v[l2][l1-1];
    cout<<"Sum"<<row1sum+row2sum;
    }
    else{
            row1sum=v[0][r2];
     row2sum=v[l2][r2];
    cout<<"Sum"<<row1sum+row2sum;
    }
   

    
    return 0;
}