#include <iostream>
using namespace std;

float calculateSI (float principal , float rate = 5 , float time = 2)
{
    return (principal * rate * time) / 100;
}
int main()
{
    float principal;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Simple Interest: " << calculateSI(principal) << endl;
    return 0;
}