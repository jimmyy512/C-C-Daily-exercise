#include <iostream> 
using namespace std;
class Ball
{
private:
	char* color;
public:
	Ball(int l)
	{ 
		switch (l)
		{
		case 0:
			color = "��";
			break;
		case 1:
			color = "��";
			break;
		case 2:
			color = "��";
			break;
		case 3:
			color = "��";
			break;
		}
	}
	char* get_color(){ return color; }
};
class Box
{
private:
	Ball* b[4];
	mutable int idx;  //�[�Wmutable �� ��idx�i�H�bconst��Ƥ������ܼ� 
public:
	Box()
	{
		idx = 0;
		int i;
		for (i = 0; i<sizeof(b) / sizeof(b[0]); i++)
			b[i] = new Ball(i); //��l�ƼƲ� ��4���y���W�� 
	}
	void showBall_color(int i, int j) const //�R�A��� 
	{
		idx = i * 2 + j;
		cout << "�y[" << idx << "]���C��" << b[idx]->get_color() << endl;
	}
};
int main()
{
	const Box bx;
	int i, j;
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			bx.showBall_color(i, j);
		}
	}
	system("pause");
}
