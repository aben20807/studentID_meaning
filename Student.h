#include<iostream>
using namespace std;
class Student
{
    public:
        Student();
        Student(const string);
        
        void setStudentId(const string);
        string getStudentId();
        string getDepartment(int);
        string getIdentity(int);
        string getEntryYear();
        string getEntryMethod();
        string getNumber();
        string getCheckCode();

    private:
        string _studentid;
};