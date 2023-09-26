#include<iostream>
using namespace std;
class fraction
{
private:
    /* data */
    int numentor;
    int denomentor;
public:
void setFraction(int num,int den){
    numentor=num;
    denomentor=den;
}

void print(){
    std:cout<<numentor<<"/"<<denomentor<<endl;
}

fraction add(fraction f){
    fraction ans;
    int lcm=denomentor*f.denomentor;
    int x=lcm/denomentor;
    int y=lcm/f.denomentor;

    int num=x*numentor + y*f.numentor;

    ans.numentor=num;
    ans.denomentor=lcm;

    return ans;
}
  
};


int main(){
   fraction f1;
   f1.setFraction(3,5);
   f1.print();

   fraction f2;
   f2.setFraction(2,4);
   f2.print();
   fraction f3;
   f3=f1.add(f2);
   f3.print();
    return 0;
}