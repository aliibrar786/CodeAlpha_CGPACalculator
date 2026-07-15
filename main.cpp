#include<iostream>
#include <string>
#include <limits> // Required for clearing the buff
using namespace std;
int main()
{
  // CGPA CALCULATOR

  // ALL INPUTS
  //1-> number of courses taken by the student
  //2-> For each course input the grade  and the credit hour 

  //3-> process the total credit and total grade(grade * credit hours)

  //4-> compute the gpa and semester and then overall gpa 

  //5-> display individual course detail and final CGPA

  //DAY 1 
  int no_of_course ,credit_hour;
  string grade;

  cout<<"-------------------WELCOME TO CGPA CALCULATOR-----------------"<<endl;
  cout<<"Enter the number of courses: ";
  cin>>no_of_course;

  // for loop for each course  the grade and the credit hour

  for (int i = 1; i <=no_of_course; i++)
  {
      cout<<"***********COURSE"<<i<<"*****************"<<endl;
    cout<<"Enter the credit_hour: ";
    cin>>credit_hour;
    cout<<"Enter the grade: ";
   cin>>grade;
  }
}
  