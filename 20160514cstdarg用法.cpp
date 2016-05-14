#include <iostream>
#include <cstdarg>
using namespace std;
void printLine(char* first, ...){
	char*str;
	va_list ap;
	
	str = first;
	va_start(ap, first);               // �}�l�ϥ� va_list
	do {
		printf("%s \n", str);
		str = va_arg(ap, char*);    // ���V�U�@�ӰѼ�
	} while (str != NULL);
	va_end(ap);                    // ����ϥ�
}
template <typename T>
T sum(T first, ...)//...�֥[ 
{
	va_list arg_ptr;//�ѼƦC����w 
	va_start(arg_ptr, first);//���w�qcount �}�l�h�֭ӰѼ� 
	T summation = 0;
	T* str=NULL;
	do 
	{
		str = va_arg(arg_ptr,T*);    // ���V�U�@�ӰѼ�
		summation +=(T) str;
	} while (str != NULL);
	va_end(arg_ptr);//���� 
	return summation;
}
template <typename t>
t findMax(t amount, ...)
{
	va_list arg_ptr;
	va_start(arg_ptr, amount);
	t max = va_arg(arg_ptr, t);
	for (int i = 0; i < amount-1; i++)
	{
		t currentNum = va_arg(arg_ptr, t);
		if (currentNum > max)
			max = currentNum;
	}
	return max;
}
int main()
{
	printf("%d\n",sum(3, 1, 2, 3));
	printf("%d\n", findMax(5, 30, 20, 60, 1000,5000));
	printf("%lf\n", findMax((double)5.0, 3.2, 2.1, 6.7, 11.3, 5.000));
	system("pause");

}

