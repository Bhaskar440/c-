#include<iostream>
using namespace std;
class BankAccount{
    private:
    string accountName;
    double balance;

    public:
    BankAccount(string accname,double initialBalance)
    {
        accountName = accname;
        balance = initialBalance;
    }
    double getBalance()const{
        return balance; 
    }
    void depositMoney(double amount){
        if(amount>0){
            balance += amount;
            cout<<"Deposited:"<<amount<<endl;
        }
        else{
            cout<<"Invalid deposit";
        }
    }
    void withDraw(double amount){
        if(amount>0 && amount<=balance)
        {
            balance -=amount;
        }
        else{
            cout<<"Invalid amount withdrawn";
        }
    }
}
int main()
{
    BankAccount myacc("13456431",3434321);
    myacc.getBalance();
    myacc.depositMoney(5000);
    myacc.withDraw(2000);
    return 0;
}