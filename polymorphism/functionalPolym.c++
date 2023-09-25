#include<iostream>
using namespace std;
int area(int l,int b){
    cout<<"Call function 1"<<endl;
    int area=l*b;
    return area;
}
int area(int side){
    cout<<"Call function 2"<<endl;
    int area=side*side;
    return area;
}
int area(double side){
    cout<<"Call function 3"<<endl;
    int area=side*side;
    return area;
}
int main()
{
    /* code */
    int l,b;
    int side;
 //   cin>>l>>b;
     cin>> side;
    cout<<area(side);
    return 0;
}
