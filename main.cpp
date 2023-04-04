#include <iostream>
#include <iomanip>
using namespace std;
class person
{
protected:
    int marks,regno,n,j;
    string name,gender,course,uname;
public:
    void accept();
    char grading(int);
    void display();
};
class student:public person
{
public:
    char grade;
void accept()
    {
        cout<<"Enter the registration number"<<endl;
        cin>>regno;
        cout<<"Enter the student name"<<endl;
        cin>>name;
        cout<<"Enter the gender of student"<<endl;
        cin>>gender;
        cout<<"Enter the course"<<endl;
        cin>>course;
        cout<<"Enter the unit name"<<endl;
        cin>>uname;
        cout<<"Enter the student's marks"<<endl;
        cin>>marks;
    }
char grading(int marks)
    {
     if (marks>=70 && marks<=100)
     {
         grade='A';
     }
     else if (marks>=60 && marks<=69)
     {
         grade='B';
     }
     else if (marks>=50 && marks<=59)
     {
         grade='C';
     }
      else if (marks>=40 && marks<=49)
     {
         grade='D';
     }
     else if (marks>=0 && marks<=39)
     {
         grade='F';
     }
     else
        cout<<"Invalid Marks!!"<<endl;
     return grade;
    }
void display()
    {
        grading(marks);
        cout<<regno<<setw(15)<<name<<setw(15)<<gender<<setw(10)<<course<<setw(15)<<uname<<setw(15)<<marks<<setw(10)<<grade<<endl;
    }
};
int main()
{
    int n,j;
    student s;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    for(j=1;j<=n;j++)
    {
     s.accept();
    }
    cout<< "Registration No"<<setw(8)<< "Name"<<setw(8)<< "Gender"<<setw(8)<< "Course"<<setw(8)<< "Unit Name"<<setw(8)<< "Marks"<<setw(8)<< "Grade"<<endl;
    for(j=1;j<=n;j++)
    {
        s.display();
    }
    return 0;
}
