#include <bits/stdc++.h>
using namespace std;

class BankAccount
{

private:
    string password;

protected:
    int balance;

public:
    string account_holder;
    string address;
    int age;
    int account_number;
    friend class MyCash;

    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 1000000;
        this->balance = 0;
        cout << "Your account number is " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void add_money(string password, int amount)
    {
        if (this->password == password)
        {
            if (amount < 0)
            {
                cout << "You can't add negative amount" << endl;
                return;
            }
            this->balance += amount;
            cout << "Add money success" << endl;
        }
        else
        {
            cout << "Wrong password" << endl;
        }
    }
    void deposit_money(string password, int amount)
    {
        if (amount < 0)
        {
            cout << "You can't add negative amount" << endl;
            return;
        }
        if (this->balance < amount)
        {
            cout << "Insufficient balance" << endl;
            return;
        }
        if (this->password == password)
        {
            this->balance -= amount;
            cout << "Deposit money success" << endl;
        }
        else
        {
            cout << "Wrong password" << endl;
        }
    }
};

class MyCash
{
protected:
    int balance;

public:
    MyCash()
    {
        this->balance = 0;
    }
    void add_money_from_bank(BankAccount *myaccount, string password, int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        if (myaccount->balance < amount)
        {
            cout << "Insufficient" << endl;
            return;
        }
        if (myaccount->password == password)
        {
            this->balance += amount;
            myaccount->balance -= amount;
            cout << "Add money from bank is successful" << endl;
        }
        else
        {
            cout << "Wrong password" << endl;
        }
    }
    int show_balance(string password)
    {

        return this->balance;
    }
};

BankAccount *create_account()
{
    string account_holder, address, password;
    int age;
    cout << "CREATE ACCOUNT" << endl;
    cin >> account_holder >> address >> age >> password;
    BankAccount *myAccount = new BankAccount(account_holder, address, age, password);
    return myAccount;
}

void add_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "ADD MONEY" << endl;
    cin >> password >> amount;
    myAccount->add_money(password, amount);
    cout << "Your balance is " << myAccount->show_balance("123") << endl;
}

void deposit_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "DEPOSIT MONEY" << endl;
    cin >> password >> amount;
    myAccount->deposit_money(password, amount);
    cout << "Your balance is " << myAccount->show_balance("123") << endl;
}

void add_money_from_bank(MyCash *myCash, BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "ADD MONEY FROM BANK" << endl;
    cin >> password >> amount;
    myCash->add_money_from_bank(myAccount, password, amount);
    cout << "Your balance is " << myAccount->show_balance("123") << endl;
    cout << "MyCash balance is " << myCash->show_balance("123") << endl;
}

int main()
{
    BankAccount *myaccount = create_account();
    MyCash *myCash = new MyCash();
Loop:
    cout << "Select option: " << endl;
    cout << "1. Add money from bank" << endl;
    cout << "2. Deposit money from bank" << endl;
    cout << "3. Add money to Mycash from bank" << endl;
flag:
    int option;
    cin >> option;
    if (option == 1)
    {
        add_money(myaccount);
    }
    else if (option == 2)
    {
        deposit_money(myaccount);
    }
    else if (option == 3)
    {
        add_money_from_bank(myCash, myaccount);
    }
    else
    {
        cout << "Invalid option" << endl;
        goto Loop;
    }
    goto flag;
return 0;
}
