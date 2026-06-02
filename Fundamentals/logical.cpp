#include <iostream>
using namespace std;
int main() {
    bool firstCondition = true;
    bool secondCondition = false;
    cout << "First Condition: " << firstCondition << endl;
    cout << "Second Condition: " << secondCondition << endl;

    cout << "Logical AND (&&): " << (true && true) << endl;
    cout << "Logical AND (&&): " << (true && false) << endl;
    cout << "Logical AND (&&): " << (false && false) << endl;
    cout << endl;
    cout << "Logical OR (||): " << (true || true) << endl;
    cout << "Logical OR (||): " << (true || false) << endl;
    cout << "Logical OR (||): " << (false || false) << endl;    
    cout << endl;
    cout << "Logical NOT (!): " << (!true) << endl;
    cout << "Logical NOT (!): " << (!false) << endl;
    
    return 0;
}