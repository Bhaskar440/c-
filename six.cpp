#include<iostream>
#include<string>
using namespace std;
class Tea{
    public:
    virtual void prepare() = 0;//virtual function
    virtual void coffee()=0;
    virtual void chai() = 0;

    void beverage(){
        prepare();
        coffee();
        chai();
    };  
};
class GreenTea: public Tea {
public:
    void prepare() override { cout<<"green leaves and water is ready"<<endl; }
    void coffee() override { cout<<"hori hai "; }
    void chai() override { cout<<"chai making"; }
};
class MasalaTea: public Tea {
public:
    void prepare() override { 
        cout<<"masala leaves and water is ready"<<endl; }
    void coffee() override { cout<<"hori hai "; }
    void chai() override { cout<<"chai making"; }
};

int main(){
    GreenTea gt;
    MasalaTea mt;
    gt.prepare();
    mt.coffee();
}
//this code was for the abstraction ek class banayi usse derived banate ahe
