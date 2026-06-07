#include <iostream>
using namespace std;
int main()
{
    int age , creditScore;
    double salary;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your salary: ";
    cin >> salary;
    cout << "Enter your credit score: ";
    cin >> creditScore;
    if ( age>= 21 && salary >= 50000 && creditScore >= 700 ) 
    {
        cout << "Congratulations! You are eligible for the loan." << endl;
    }
    else 
    {
        cout << "Sorry, you do not meet the eligibility criteria for the loan." << endl;
    }
}