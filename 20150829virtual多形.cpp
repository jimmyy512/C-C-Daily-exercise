//�����禡�i�H��{����ɴ����u�h���v�A�]�N�O�u�@�Ӥ����A�h�ب禡�v�A
//�@�ӧt�������禡�����O�Q�٬��u�h�������O�v�]Polymorphic class�^�A
//��@�Ӱ����O���A�����Ы��V�@�ӧt�������禡���l�����O�A�z�N�i�H�ϥγo�ӫ��ШӦs���l�����O���������禡
#include <iostream> 
using namespace std;
class food1
{
	public:
		virtual void show()
		{
			cout<<"food1 is show!"<<endl;
		}
};
class food2:public food1
{
	public:
		virtual void show()
		{
			cout<<"food2 is show!"<<endl;
		}
};
void ShowFoodByRef(food1 &f)
{
	f.show();
}
void ShowFoodByPtr(food1* f)
{
	f->show();
}
int main()
{
	food1 f1;
	food2 f2;
	cout<<"�R�A�pô!"<<endl;
	f1.show();
	f2.show();
	cout<<"�ʺA�pô"<<endl;
	ShowFoodByRef(f1);
	ShowFoodByRef(f2);
	cout<<"�ʺA�pô"<<endl;
	ShowFoodByPtr(&f1);
	ShowFoodByPtr(&f2);
}
