#include <iostream>
using namespace std;
void Show_info(char Teacher_Name[10] = "莊鈞宇", char class_name[10] = "啟智班級", int student = 50);
int main()
{
	cout << "班級\t\t導師姓名\t學生人數" << endl;
	char class_name[3][10] = { { "三年一班" }, { "三年二班" }, { "三年三班" } };
	char Teacher_Name[3][10] = { { "陳天兵" }, { "吳廣正" }, { "廖哲文" } };
	Show_info(Teacher_Name[1], class_name[2], 30);
	Show_info();
	Show_info(Teacher_Name[2],class_name[0]);


	system("pause");
}
void Show_info(char Teacher_Name[10], char class_name[10], int student)
{
	cout << class_name << "\t" << Teacher_Name << "\t\t" << student << endl;
}

