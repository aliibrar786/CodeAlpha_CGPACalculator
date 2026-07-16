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
  
  int semester;
   double overall_credit_hour = 0;
  double overall_quality_point = 0;
    double total_credit_hour = 0;
  double total_quality_point = 0;

  
  


  cout<<"-------------------WELCOME TO CGPA CALCULATOR-----------------"<<endl;
  cout<<"Enter number of semester: ";
  cin>>semester;
  for (int j = 1; j <= semester; j++)
  {
    // reset semester-level totals (NO 'double' here, just reset)
     total_credit_hour = 0;
   total_quality_point = 0;
   cout << "=========== SEMESTER " << j << " ===========" << endl;
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

   float grade_point;
  if(grade == "A+")
  {
    grade_point = 4.0;

  }
  else if(grade == "A")
  {
    grade_point = 4.0;
  }
  else if(grade == "A-")
  {
    grade_point = 3.7;
  }
  else if(grade == "B+")
  {
    grade_point = 3.3;
  }
  else if(grade == "B")
  {
    grade_point = 3.0;
  }
  else if(grade == "B-")
  {
    grade_point = 2.7 ;
  }
  else if(grade == "C+")
  {
    grade_point = 2.3;
  }
  else if(grade == "C")
  {
    grade_point = 2.0;
  }
  else if(grade == "C-")
  {
    grade_point = 1.7;
  }
  else if(grade == "D")
  {
    grade_point = 1.0;
  }
 else{
  grade_point = 0;
 }
 double quality_point = grade_point * credit_hour;
 total_quality_point+=quality_point;
 total_credit_hour+=credit_hour;
  }


  double GPA = total_quality_point/total_credit_hour;
  cout<<"Semester "<<j<<" GPA: "<<GPA<<endl;
    overall_quality_point += total_quality_point;    // ← YE LINE ADD KARO
  overall_credit_hour += total_credit_hour; 
}
  double CGPA = overall_quality_point/overall_credit_hour;

  cout<<"---------------------------------------------------"<<endl;
  cout<<"OVERALL CGPA: "<<CGPA<<endl;

  
  



 
}
  