#include"Student.h"

Student::Student()
{
    setStudentId("A00000000");
}
Studet::Student(string init_id)
{
    setStudentId(init_id);
}

void Student::setStudentId(string set_id)
{
    _studentid=set_id;
}
string Student::getStudentId()
{
    return _studentid;
}

string Student::getDepartment()
{
    if(_studentid[0]=='A'&&_student[1]=='N')
        return "大一全校不分系學士學位學程";
    else if(_studentid[0]=='B'&&_student[1]=='1')
        return "中國文學系";
    else if(_studentid[0]=='B'&&_student[1]=='2')
        return "外國語文學系";
    else if(_studentid[0]=='B'&&_student[1]=='3')
        return "歷史學系";
    else if(_studentid[0]=='B'&&_student[1]=='5')
        return "臺灣文學系";
    else if(_studentid[0]=='C'&&_student[1]=='1')
        return "數學系";
    else if(_studentid[0]=='C'&&_student[1]=='2')
        return "物理學系";
    else if(_studentid[0]=='C'&&_student[1]=='3')
        return "化學系";
    else if(_studentid[0]=='C'&&_student[1]=='4')
        return "地球科學系";
    else if(_studentid[0]=='C'&&_student[1]=='5')
        return "生命科學系";
    else if(_studentid[0]=='C'&&_student[1]=='6')
        return "生物科技與產業科學系";
    else if(_studentid[0]=='D'&&_student[1]=='2')
        return "法律學系";
    else if(_studentid[0]=='D'&&_student[1]=='4')
        return "政治學系";
    else if(_studentid[0]=='D'&&_student[1]=='5')
        return "經濟學系";
    else if(_studentid[0]=='D'&&_student[1]=='8')
        return "心理學系";
    else if(_studentid[0]=='E'&&_student[1]=='1')
        return "機械工程學系";
    else if(_studentid[0]=='E'&&_student[1]=='2')
        return "電機工程學系";
    else if(_studentid[0]=='E'&&_student[1]=='3')
        return "化學工程學系";
    else if(_studentid[0]=='E'&&_student[1]=='4')
        return "資源工程學系";
    else if(_studentid[0]=='E'&&_student[1]=='5')
        return "材料科學及工程學系";
    else if(_studentid[0]=='E'&&_student[1]=='6')
        return "土木工程學系";
    else if(_studentid[0]=='E'&&_student[1]=='7')
        return "建築學系";
    else if(_studentid[0]=='E'&&_student[1]=='8')
        return "水利及海洋工程學系";
    else if(_studentid[0]=='E'&&_student[1]=='9')
        return "工程科學系";
    else if(_studentid[0]=='F'&&_student[1]=='0')
        return "能源國際學士學位學程";
    else if(_studentid[0]=='F'&&_student[1]=='1')
        return "系統及船舶機電工程學系";
    else if(_studentid[0]=='F'&&_student[1]=='2')
        return "都市計劃學系";
    else if(_studentid[0]=='F'&&_student[1]=='3')
        return "工業設計學系";
    else if(_studentid[0]=='F'&&_student[1]=='4')
        return "航空太空工程學系";
    else if(_studentid[0]=='F'&&_student[1]=='5')
        return "環境工程學系";
    else if(_studentid[0]=='F'&&_student[1]=='6')
        return "測量及空間資訊學系";
    else if(_studentid[0]=='F'&&_student[1]=='7')
        return "資訊工程學系";
    else if(_studentid[0]=='F'&&_student[1]=='8')
        return "光電科學與工程學系";
    else if(_studentid[0]=='F'&&_student[1]=='9')
        return "生物醫學工程學系";
    else if(_studentid[0]=='H'&&_student[1]=='1')
        return "會計學系";
    else if(_studentid[0]=='H'&&_student[1]=='2')
        return "統計學系";
    else if(_studentid[0]=='H'&&_student[1]=='3')
        return "工業與資訊管理學系";
    else if(_studentid[0]=='H'&&_student[1]=='4')
        return "企業管理學系";
    else if(_studentid[0]=='H'&&_student[1]=='5')
        return "交通管理科學系";
    else if(_studentid[0]=='I'&&_student[1]=='2')
        return "護理學系";
    else if(_studentid[0]=='I'&&_student[1]=='3')
        return "醫學檢驗生物技術學系";
    else if(_studentid[0]=='I'&&_student[1]=='5')
        return "醫學系";
    else if(_studentid[0]=='I'&&_student[1]=='6')
        return "物理治療學系";
    else if(_studentid[0]=='I'&&_student[1]=='7')
        return "職能治療學系";
    else if(_studentid[0]=='I'&&_student[1]=='8')
        return "藥學系";
}
