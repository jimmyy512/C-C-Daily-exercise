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
	cout<<"輸入m1矩陣:";
	cin>>m1;
	cout<<"輸入m2矩陣:";
	cin>>m2;
	cout<<"++m1後得結果:"; //先自增後傳質 
	++m1;
	cout<<m1<<endl;
	cout<<"m1++後得結果:";//先傳質後自增 
	m2++;
	cout<<m2;
	 
}

