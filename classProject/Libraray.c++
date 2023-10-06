#include<iostream>
using namespace std;

class Libraray{
    private:
    int password;
    string name;
    void page2(){
        string username;
        int p;
      while(true){ cout<<"Login Plese"<<endl;
       cout<<"Enter UserName"<<endl;
       cin>>username;
       cout<<"Enter Password"<<endl;
       cin>>p;
       if(p==password && name==username){
        cout<<"Login succesfully"<<endl;
        break;
       }
       else{
        cout<<"enter again"<<endl;
       }}
    }

    public:
    void greet(){
        cout<<"   R.D Engineering College"<<endl;
        cout<<"         ==========="<<endl;
        cout<<"      Libraray Mangement System"<<endl;
        cout<<"            ==========="<<endl;
    }
   void createUser(){
       cout<<"Enter Name";
       cin>>name;
       cout<<"Enter password";
       cin>>password;
       cout<<"User Create successfuly";

       for(int i=0;i<10000;i++){

       }

       page2();

    }
};

int main(){
    Libraray obj1;
    obj1.greet();
    obj1.createUser();
    return 0;
}