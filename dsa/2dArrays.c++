#include<iostream>
using namespace std;
#include<vector>
int main(){
  cout<<"Enter size of array 1 ";
  int r1,c1;
  std:cin>>r1>>c1;
  int arr1[r1][c1];
  cout<<"Enter Element"<<endl;
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
     cin>>arr1[i][j];
    }
  }
  cout<<"Enter size of array 2 ";
  int r2,c2;
  cin>>r2>>c2;
  cout<<"Enter Element";
  int arr2[r2][c2];
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>>arr2[i][j];
    }
  }
  if(c1==r2){
    int arr3[r1][c1];
   // std::vector<int> v(r1+c1,0);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            arr3[i][j]=0;
            for(int k=0;k<c1;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }

        }
    }

   for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
     cout<< arr3[i][j]<<" ";
    }
  }
  }
  else{
    cout<<"NOt mustiply Poible";
  }
return 0;
}