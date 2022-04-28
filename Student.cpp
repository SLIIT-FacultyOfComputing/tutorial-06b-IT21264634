#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int stuId,char stuName[20]) {
  studentId=stuId;
  strcpy(name, stuName);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student id:"<<studentId<<endl;
  cout<<"Name:"<<name<<endl;
}
