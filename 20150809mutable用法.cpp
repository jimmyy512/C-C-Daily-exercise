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
			color = "";
			break;
		case 1:
			color = "坚";
			break;
		case 2:
			color = "屡";
			break;
		case 3:
			color = "厚";
			break;
		}
	}
	char* get_color(){ return color; }
};
class Box
{
private:
	Ball* b[4];
	mutable int idx;  //mutable  琵idxconstㄧ计ずΘ跑计 
public:
	Box()
	{
		idx = 0;
		int i;
		for (i = 0; i<sizeof(b) / sizeof(b[0]); i++)
			b[i] = new Ball(i); //﹍て计舱 р4聋瞴常︹ 
	}
	void showBall_color(int i, int j) const //繰篈ㄧ计 
	{
		idx = i * 2 + j;
		cout << "瞴[" << idx << "]肅︹" << b[idx]->get_color() << endl;
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
