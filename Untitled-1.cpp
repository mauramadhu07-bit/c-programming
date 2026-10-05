#include <iostream>
#include<string>
using namespace std;

class  bankacc {
private:
    string accountholdername;
    double balance;
public:
    openaccount(string name,double initialbalance);
    {
        accountholdername=name;
        balance = intialbalance;;
    }
    bankacc(string name,double initialbalance);
    void deposit (double amount);
    {

        if amount>0{
            balance+=amount;
            cout<<"deposited:"<< amount<< endl;
        }else{
                cout<< "Invalid deposit amount",,endl;
            }
        }
    }
    void withdraw(double amount);
    {
        if{amount>0 && amount <=balance
            balance-=amount;
            cout<<"Withdraw:"<< amount<<endl;
        }else{
            cout<<"Invalid withdrawal amount:"<<endl;
        }
         
    }
    void display();

};


int main()
{
    cout<<"Enter account holder name:";
    string name;
    getline(cin,name);
    cout <<"Enter initial balance:";
    double initialbalance;
    cin>>initialbalance;
    Bankacc account
    account openAccount(name,initialization);
    cout <<"Enter amount to deposit:";
    double depositAmount;
    cin >> depositAmount;
    account.deposit(depositAmount);
    cout<< "Enter amount to witdraw:";
    double withdrawAmount;
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    cout <<"Account Holder :"<<name <<name<<endl;
    cout<<"current balance:"<< account account.getbalance()<<endl;


}