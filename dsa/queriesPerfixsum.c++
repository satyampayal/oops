#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter array size";
    int n;
    cin>>n;
    std::vector<int> v(n+1,0);
    cout<<"ENter array element";
    for(int i=1;i<n;i++){
        int ele;
        cin>>ele;
        v[i]=ele;
    }
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    cout<<"Enter query number";
    int q;
    cin>>q;
    while(q--){
     cout<<"ENter l,r";
        int l,r;
        cin>>l>>r;

        //ans=v[r]-v[l-1];
        int ans=v[r]-v[l-1];
        cout<<ans;
    }
    return 0;
}