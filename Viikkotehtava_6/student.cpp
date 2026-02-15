#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, int age)
{
    this->name = name;
    this->age = age;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentInfo() const
{
    cout << "Name: " << name << ", Age: " << age << endl;
}
