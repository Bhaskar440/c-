// Online C++ compiler to run C++ program online
#include <iostream>

#include <iostream>
#include <vector>
using namespace std;
class Chai {
    public:
    int servings;
    string teaName;
    vector<string> ingredients;

    void chaiDetails(){
        cout<<"Number of:"<<servings<<endl;
        cout<<"Your tea name is:"<<teaName<<endl;
        cout<<"Ingredients:";
        for(string ingredient:ingredients)
        {
            cout<<ingredient<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Chai chaiOne;
    chaiOne.servings = 3;
    chaiOne.ingredients = {"water","patti","sugar"};
    chaiOne.chaiDetails();
}