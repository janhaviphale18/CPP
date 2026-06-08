#include <iostream>
using namespace std;
int main ()
{
    double balance , withdrawalAmount , remainingBalance;
    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;
    if ( balance < 0 )
    {
        cout << "Invalid Balance" << endl;
    }
    else if ( withdrawalAmount < 0 )
    {
        cout << "Invalid Withdrawal Amount" << endl;
    }
    else if ( withdrawalAmount > balance )
    {
        cout << "Insufficient Funds" << endl;
    }
    else 
    {
        remainingBalance = balance - withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: " << remainingBalance << endl;
    }
}