//虛擬函式可以實現執行時期的「多型」，也就是「一個介面，多種函式」，
//一個含有虛擬函式的類別被稱為「多型的類別」（Polymorphic class），
//當一個基底類別型態的指標指向一個含有虛擬函式的衍生類別，您就可以使用這個指標來存取衍生類別中的虛擬函式
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
	cout<<"靜態聯繫!"<<endl;
	f1.show();
	f2.show();
	cout<<"動態聯繫"<<endl;
	ShowFoodByRef(f1);
	ShowFoodByRef(f2);
	cout<<"動態聯繫"<<endl;
	ShowFoodByPtr(&f1);
	ShowFoodByPtr(&f2);
}
