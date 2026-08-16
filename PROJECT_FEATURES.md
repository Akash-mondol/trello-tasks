# Project Features

## Student Information

- Student ID
- Student Name
- Student Age
- Student CGPA
- Student Department
- Student Email
- Student Phone Number
- Student Address
- Student Gender
- Student Semester
- Student Credit Hours
- Student Status

## Student Data Structure

The project uses a C++ Student structure to store student information.

```cpp
struct Student
{
    int studentId;
    char studentName[100];
    int age;
    float cgpa;
    char department[50];
    char email[100];
    char phone[25];
    char address[200];
    char gender[10];
    int semester;
    int creditHours;
    char status[20];
};