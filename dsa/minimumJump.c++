#include<iostream>
#include<vector>
using namespace std;
// this is not work on gfg not pass cases 
// 15
// 9 10 1 2 3 4 8 0 0 0 0 0 0 0 1
void minimumJumpFind(vector<int> &arr){

// second method  
// i learn previously in method 1 we compair with arr[pi] it is wrong 
// our mainly focus on the take large jump ;
int pi=0;
int si;
int li;
int maxpiReach;
int n=arr.size()-1;
int jump=0;
while(pi!=n){
    maxpiReach=arr[pi]+pi;
     si=pi+1;
     li=arr[pi]+pi;
    if(n<=1){
        jump=0;
        break;
    }
    else if(arr[pi]==0){
        jump=-1;
        break;
    }
    else{
        if(maxpiReach>=n){
            jump++;
          //  cout<<jump<<"of maxpi Reach"<<endl;
            break;
        }
        else{
            for(int i=si;i<=li;i++){
                if(i+arr[i]>maxpiReach){
                    maxpiReach=i+arr[i];
                    pi=i;
                }
            }
            jump++;
        }

    }
}
    cout<<jump<<endl;


    // first method which fail 
//     int pi=0;
//     int si,li,jump=0;
//     while(pi!=arr.size()-1){
//         si=pi+1;
//         li=pi+arr[pi];
//          if(li>=arr.size()-1){
//         jump+=1;
//         break;
//        }
//        else if(arr[pi]==0){
//         jump=0;
//         break;

//        }
// else{
//         int max=arr[pi];
//         for(int i=si;i<=li;i++){
//             if(arr[i]>max){
//                 max=arr[i];
//                 pi=i;
//             }
//             else{
//                 pi=i;// test case not suit 1 1 0 why i apply this else 
//             }
//         }
      
        
//     }
//         jump++;
//     }


//     cout<<jump;

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