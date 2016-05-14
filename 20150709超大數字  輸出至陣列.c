#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
範例輸入 ：  help
2222222222222222222222222 + 1111111111111111111111111
2222222222222222222222222 - 1111111111111111111111111
2222222222222222222222222 * 1111111111111111111111111
2222222222222222222222222 / 1111111111111111111111111
範例輸出 ：

3333333333333333333333333
1111111111111111111111111
2469135802469135802469135308641975308641975308642
2
*/
#define debug
int i,j,k;
int main()
{
	char inputer [50]={0};
	while(gets(inputer)!=0)//空格為asc ii '32'
	{
		int ctrl=0;
		char a[50]={0},b[50]={0};
//		for(i=0;i<strlen(inputer);i++) //輸入錯誤的話 
//		{
//			if(inputer[i]==32)
//				ctrl++;
//			if(ctrl==0)
//			{
//				printf("輸入錯誤!記得運算符號前後 加上空白\n");
//				goto start;
//			}
//				
//		}
		for(i=0;i<strlen(inputer);i++)  //把第一段數字存進陣列a 
		{
			if(inputer[i]==32)//空格為asc ii '32'
				break;
			a[i]=inputer[i]-'0';
		}
		for(i=0,j=strlen(a)+3;i<strlen(inputer)-(strlen(a)+3);i++,j++)  //把第二段數字存進陣列b
			b[i]=inputer[j]-'0';
#ifdef debug
		printf("\n a陣列:"); 	//debug  
		for(i=0;i<strlen(a);i++)//a陣列測試 
		{
			printf("%d",a[i]);
		}
		printf("\n b陣列:");
		for(i=0;i<strlen(b);i++)//b陣列測試 
		{
			printf("%d",b[i]);
		}
		printf("\n\n");
#endif
		
	}
}
