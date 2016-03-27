#include<iostream>
#include<cstdlib>
using namespace std;
class Student
{
    public:
        Student();
        Student(const string);
        
        void setStudentId(const string);
        string getStudentId();
        string getDepartment();
        string getIdentity();
        string getEntryYear();
        string getEntryMethod();
        string getNumber();
        string getCheckCode();
        void setCheck(bool);
        bool getCheck();
    private:
        string _studentid;
        bool _check;
};
