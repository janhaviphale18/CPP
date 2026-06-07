#include <iostream>
using namespace std;

int main()
{
    double purchaseAmount, discount, finalAmount;

    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount < 0)
    {
        cout << "Invalid purchase amount.";
    }
    else if (purchaseAmount >= 5000)
    {
        discount = purchaseAmount * 0.20;
        finalAmount = purchaseAmount - discount;

        cout << "Original Amount: Rs. " << purchaseAmount << endl;
        cout << "Discount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount;
    }
    else if (purchaseAmount >= 2000)
    {
        discount = purchaseAmount * 0.10;
        finalAmount = purchaseAmount - discount;

        cout << "Original Amount: Rs. " << purchaseAmount << endl;
        cout << "Discount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount;
    }
    else
    {
        discount = 0;
        finalAmount = purchaseAmount;

        cout << "Original Amount: Rs. " << purchaseAmount << endl;
        cout << "Discount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount;
    }

    return 0;
}