#include<iostream>
#include<vector>
using namespace std;
void minimumJumpFind(vector<int> &arr){
    int pi=0;
    int si,li,jump=0;
    while(pi!=arr.size()-1){
        si=pi+1;
        li=pi+arr[pi];
         if(li>=arr.size()-1){
        jump+=1;
        break;
       }
       else if(arr[pi]==0){
        jump=0;
        break;

       }
else{
        int max=arr[pi];
        for(int i=si;i<=li;i++){
            if(arr[i]>max){
                max=arr[i];
                pi=i;
            }
            else{
                pi=i;// test case not suit 1 1 0 why i apply this else 
            }
        }
      
        
    }
        jump++;
    }


    cout<<jump;

}
int main(){
    cout<<"Enter size of array";
    int n;
    cin>>n;
    cout<<"Enter element";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minimumJumpFind(arr);

    return 0;
}