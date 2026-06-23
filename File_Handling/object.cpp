#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    char name[20];
    int age;
};

int main()
{
    Student s1 = {"Janhavi", 19};

    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s1, sizeof(s1));
    outFile.close();

    Student s2;

    ifstream inFile("student.dat", ios::binary);
    inFile.read((char*)&s2, sizeof(s2));
    inFile.close();

    cout << "Name = " << s2.name << endl;
    cout << "Age = " << s2.age << endl;

    return 0;
}