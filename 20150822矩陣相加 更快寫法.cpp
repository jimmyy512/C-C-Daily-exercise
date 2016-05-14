#include <iostream>
using namespace std;
int i,k;
class Matrix
{
	int matrix_num[2][2];
	public:
		friend istream& operator >>(istream& in,Matrix& m) //�@�w�n�[friend  
		{
			for(i=0;i<4;i++)
				in>>m.matrix_num[i/4][i%4];
			return in;
		}
		friend ostream& operator <<(ostream& out,Matrix& m) //�@�w�n�[friend  
		{
			for(i=0;i<4;i++)
				out<<m.matrix_num[i/4][i%4]<<" ";
			return out;
		}
		Matrix operator+ (Matrix m)
		{
			Matrix tmp;
			for(i=0;i<4;i++)
				tmp.matrix_num[i/4][i%4]=this->matrix_num[i/4][i%4]+m.matrix_num[i/4][i%4];
			return tmp;
		}
};
int main()
{
	Matrix m1,m2,m3;
	cout<<"�п�Jm1�x�}:"; 
	cin>>m1;
	cout<<"�п�Jm2�x�}:";
	cin>>m2;
//	m3=m1+m2;
	m3=m1.operator+(m2);
	cout<<"m1�x�}�[�Wm2�x�}�����G��:"<<endl; 
	cout<<m3;
	
}
