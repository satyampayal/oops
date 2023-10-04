#include<iostream>
#include<vector>
using namespace std; 
void spiralOrder(vector<vector<int> >&v){
    int rs=0;
    int re=v.size()-1;
    int cs=0;
    int ce=v[0].size()-1;

 while(rs<=re && cs<=ce) {  // left ro right 
    for(int i=cs;i<=ce;i++){
        // row start fix 
        cout<<v[rs][i]<<" ";
    }
    rs++;
     // top ro bottom
    for(int i=rs;i<=re;i++){
        // col end  fix 
        cout<<v[i][ce]<<" ";
    }
    ce--;

    // right to left
    for(int i=ce;i>=cs;i--){
        // row end  is fix
        cout<<v[re][i]<<" ";
    }
    re--;
     // bottom to top
    for(int i=re;i>=rs;i--){
        // col start  is fix
        cout<<v[i][cs]<<" ";
    }
    cs++;
    }

}
int main(){
int r,c;cin>>r;cin >> c;
     vector<vector<int>> v(r,vector<int>(c));

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
     }

     spiralOrder(v);
    return 0;

}