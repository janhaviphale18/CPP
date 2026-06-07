#include <iostream>
using namespace std;
int main()
{
    double weight , height , bmi;
    cout << "Enter your weight in kg: ";
    cin >> weight;
    cout << "Enter your height in metres: ";
    cin >> height;
    if (weight <= 0 || height <= 0)
    {
        cout << "Invalid Input" << endl;
    }
    else 
    {
        bmi = weight / (height*height);
        cout << "Your BMI is: " << bmi << endl;
        if (bmi < 18.5)
        {
            cout << "You are underweight." << endl;
        }
        else if (bmi < 25)
        {
            cout << "You have a normal weight." << endl;
        }
        else if (bmi < 30)
        {
            cout << "You are overweight." << endl;
        }
        else
        {
            cout << "You are obese." << endl;
        }
    }
    return 0;
}