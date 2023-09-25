#include<iostream>
using namespace std;
class Animal{
    public:
    char name[20];
    int lags;
    int countLags(){
        return lags;
    }
};

int main(){
    Animal cat;
    cat.lags=4;
    std::cout<<cat.countLags()<<endl;

    return 0;
}
