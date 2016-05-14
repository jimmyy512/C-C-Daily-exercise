#include <iostream>
using namespace std;
int i;
class Matrix
{
	int matrix_num[2][2];
	public:
		friend istream& operator >>(istream& in,Matrix& m)
		{
			for(i=0;i<4;i++)
				in>>m.matrix_num[i/4][i%4];
			return in;
		}
		friend ostream& operator <<(ostream& out,Matrix& m)
		{
			for(i=0;i<4;i++)
				out<<m.matrix_num[i/4][i%4]<<" ";
			return out;
		}
		Matrix operator ++()
		{
			for(i=0;i<4;i++)
				matrix_num[i/4][i%4]++;
			return *this;
		}
		Matrix operator ++(int)
		{
			for(i=0;i<4;i++)
				matrix_num[i/4][i%4]=matrix_num[i/4][i%4]++;
			return *this;
		}
};
int main()
{
	Matrix m1,m2;
	cout<<"��Jm1�x�}:";
	cin>>m1;
	cout<<"��Jm2�x�}:";
	cin>>m2;
	cout<<"++m1��o���G:"; //���ۼW��ǽ� 
	++m1;
	cout<<m1<<endl;
	cout<<"m1++��o���G:";//���ǽ��ۼW 
	m2++;
	cout<<m2;
	 
}

