#include <iostream>
#include <windows.h>
using namespace std;
class calc
{
private:
	char str1[100];
	char str2[100];
	char * resault=NULL;
	int  * press = NULL;
	
public:
	calc(const char*str1, const char* str2)
	{
		strcpy(this->str1,str1);
		strcpy(this->str2, str2);
	}
	char *multcount()
	{
		free(press);
		press =(int *) malloc(sizeof(int)*(strlen(str1) + strlen(str2)));
		memset(press, 0, sizeof(int)*(strlen(str1) + strlen(str2)));
		for (int i = 0; i <(int) strlen(str1); i++)
		{
			for (int j = 0; j < (int)strlen(str2); j++)
			{
				press[i + j + 1] += (str1[i] - '0') * (str2[j] - '0');
			}
		}
		for (int i = (int)strlen(str1) + (int)strlen(str2); i >= 0; i--)
		{
			if (press[i] >= 10)//進位
			{
				press[i - 1] += press[i] / 10;//把當前的數字取十位數 相加到下一個數字 = 進位
				press[i] %= 10;//進位完成後 自己取個位
			}
		}
		int i=0, j = 0;
		while (press[i] == 0)//去掉0 
		{
			i++;
		}
		free(resault);
		resault = (char *)malloc(sizeof(char)*((int)strlen(str1) + (int)strlen(str2)));
		for (j = 0; j < (int)strlen(str1) + (int)strlen(str2)-1; j++, i++)
		{
			resault[j] = press[i]+'0';
		}
		resault[j] = '\0';
		return resault;
	}
};
int main()
{
	calc Mycalc("12345", "19");
	for (int i = 0; i < 200000; i++)
	{
		printf("%s\n", Mycalc.multcount());
		Sleep(1);
	}
	
	system("pause");


	return 0;
}
