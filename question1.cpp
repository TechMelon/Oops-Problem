// Create a class BankAccount with private attributes accountNumber, balance, and ownerName. Write methods to deposit and withdraw money. Explain how encapsulation ensures that the balance cannot be directly modified by users.
#include <iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber,balance;
    string ownerName;
    public:
    void intro(int b , int n, string name);
    void deposit(int amount);
    void withdraw(int amount);
    void getBalance();
};
void BankAccount::intro(int b , int n, string name){
    b>=0?balance=b:balance=0;
    accountNumber = n;
    ownerName = name;
}

void BankAccount::deposit(int amount){
    if (amount>=0)
    {
        balance += amount;
    }else{
        balance = balance;
    }
}

void BankAccount::withdraw(int amount){
    if (amount>=0)
    {
        balance -= amount;
    }
}

void BankAccount::getBalance(){
    cout << balance << endl;
}

int main(){
    BankAccount user;
    user.intro(500,123456789,sneha);
    user.getBalance();
    user.deposit(500);
    user.getBalance();
    user.withdraw(500);
    user.getBalance();
    return 0;
}