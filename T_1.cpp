#include <iostream>
using namespace std;

struct Student
{
    int id;
    char name[50];
    int age;
};

int main()
{
    Student student;

    student.id = 1;
    student.age = 20;

    cout << "Student ID: " << student.id << endl;
    cout << "Student Age: " << student.age << endl;

    return 0;
}