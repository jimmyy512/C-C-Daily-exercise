#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[20];
	cin>>str;
	int i,j=strlen(str);
	int control=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=str[j-1])
			control=1;
		j--;
	}
	control==1?cout<<"沒有對稱":cout<<"有對稱"; 
}
