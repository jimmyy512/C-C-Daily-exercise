#include <iostream>
using namespace std;
void Show_info(char Teacher_Name[10] = "���v�t", char class_name[10] = "�Ҵ��Z��", int student = 50);
int main()
{
	cout << "�Z��\t\t�ɮv�m�W\t�ǥͤH��" << endl;
	char class_name[3][10] = { { "�T�~�@�Z" }, { "�T�~�G�Z" }, { "�T�~�T�Z" } };
	char Teacher_Name[3][10] = { { "���ѧL" }, { "�d�s��" }, { "������" } };
	Show_info(Teacher_Name[1], class_name[2], 30);
	Show_info();
	Show_info(Teacher_Name[2],class_name[0]);


	system("pause");
}
void Show_info(char Teacher_Name[10], char class_name[10], int student)
{
	cout << class_name << "\t" << Teacher_Name << "\t\t" << student << endl;
}

