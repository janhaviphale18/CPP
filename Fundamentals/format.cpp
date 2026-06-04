#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double f = 3.14159;
    cout << "Default format: " << f << endl;
    cout << fixed << setprecision(2);
    cout << "Fixed format: " << f << endl;
    return 0;
}