#include <iostream>
using namespace std;

int main()
{
    double costPrice, sellingPrice, amount;

    cout << "Enter Cost Price: ";
    cin >> costPrice;

    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    if (costPrice < 0 || sellingPrice < 0)
    {
        cout << "Invalid price entered.";
    }
    else if (sellingPrice > costPrice)
    {
        amount = sellingPrice - costPrice;

        cout << "Profit of Rs. " << amount;
    }
    else if (costPrice > sellingPrice)
    {
        amount = costPrice - sellingPrice;

        cout << "Loss of Rs. " << amount;
    }
    else
    {
        cout << "No Profit No Loss";
    }

    return 0;
}