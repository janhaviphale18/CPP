#include <iostream>
using namespace std;

int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Total digits = " << countDigits(number) << endl;
    return 0;
}