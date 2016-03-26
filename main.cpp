#include"Student.h"

int main()
{
    string id;
    while(cin>>id)
    {
        Student stid(id);
        cout<<stid.getStudentId()<<endl;
    }
    return 0;
}
