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
    char department[50];
    char email[100];
    char phone[20];
    char address[100];
    char gender[10];
    int semester;
    int creditHours;

         strcpy(student.department, "CSE");

    cout << "Student ID: " << student.id << endl;
    cout << "Student Age: " << student.age << endl;
    cout << "Student CGPA: " << student.cgpa << endl;
    cout << "Student Department: " << student.department << endl;
   

    return 0;
}