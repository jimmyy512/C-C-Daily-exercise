#include <iostream>
using namespace std;
int i,j;
class Matrix
{
	int Matrix_num[2][2];
	public:
		Matrix(int a0,int a1,int b0,int b1)
		{
			int input[4]={a0,a1,b0,b1};
			for(i=0;i<4;i++)
				Matrix_num[i/4][i%4]=input[i];
		}
		Matrix()
		{
			for(i=0;i<4;i++)
				Matrix_num[i/4][i%4]=0;
		}
		void print_data()
		{
			for(i=0;i<4;i++)
			{
				cout<<Matrix_num[i/4][i%4]<<" ";
				if(i==1)
					cout<<endl;
			}
		}
		Matrix operator+ (Matrix n2)
		{
			Matrix n3;
			for(i=0;i<4;i++)
				n3.Matrix_num[i/4][i%4]=Matrix_num[i/4][i%4]+n2.Matrix_num[i/4][i%4];
			return n3;
		}
		void set_info(int a0,int a1,int b0,int b1)
		{
			int input[4]={a0,a1,b0,b1};
			for(i=0;i<4;i++)
				Matrix_num[i/4][i%4]=input[i];
		}
};
int main()
{
	Matrix n1(1,2,3,4),n2(1,2,3,4),n3;
	n3=n1+n2; //等價於 n3=n1.operator+(n2); 
	n3.print_data();
	int a0,a1,b0,b1;
	Matrix t1,t2,t3;
	cout<<endl;
	cout<<"請輸入第一陣列"<<endl;
	cin>>a0>>a1>>b0>>b1;
	t1.set_info(a0,a1,b0,b1);
	cout<<"請輸入第二陣列"<<endl;
	cin>>a0>>a1>>b0>>b1;
	t2.set_info(a0,a1,b0,b1);
	t3=t1+t2;
	cout<<"兩陣列加起來為:"<<endl; 
	t3.print_data();
}
