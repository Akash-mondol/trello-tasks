#include <iostream>
using namespace std;

struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
};

int main()
{
    Student student;

    student.id = 1;
    student.age = 20;
        student.cgpa = 3.50; 

    cout << "Student ID: " << student.id << endl;
    cout << "Student Age: " << student.age << endl;
    cout << "Student CGPA: " << student.cgpa << endl;

    return 0;
}