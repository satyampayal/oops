#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<vector<int>> &v){
    // transpose Array
    
 for(int i=1;i<v.size();i++){
        for(int j=0; j<=i;j++){
            // using inbuilt method
                //swap(v[i][j],v[j][i]);

            // else you make logic;

            int temp=v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;
        }
     }
    // revers each row 
    for(int i=0;i<v.size();i++){
        int left_ptr=0;
        int right_ptr=v.size()-1;
        while(left_ptr<right_ptr){
            int temp=v[i][left_ptr];
            v[i][left_ptr]=v[i][right_ptr];
            v[i][right_ptr]=temp;
            left_ptr++;
            right_ptr--;
        }

    }

    
}
int main(){
    int n;cin>>n;
     vector<vector<int>> v(n,vector<int>(n));

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
     }
    
    rotateArray(v);
    cout<<endl;
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
     }

}