using namespace std;
#include "student.h"
#include "course.h"
#include <iostream>
int main()
{
    Student student("John Doe", 12345);
    Course course("Computer Science 101", 3);

    student.enroll(course);
    student.displayInfo();

    return 0;
}
