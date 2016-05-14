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
//#define debug
int i,j,k;
//int divide(char a,char b)
//{
//
//}
//int multiply()
//{
//	
//}
char change(char *p,char *pb,int timeA,int timeB)//前後對調 
{
	for(i=0;i<timeA/2;i++)//a數字交換回圈 
	{
		char tmp=p[i];
		p[i]=p[timeA-1-i];   //第一個和最後一個交換 第二個和倒數第二個交換 
		p[timeA-1-i]=tmp;
	}
	for(i=0;i<timeB/2;i++)//b數字交換回圈 
	{
		char tmp=pb[i];
		pb[i]=pb[timeB-1-i];
		pb[timeB-1-i]=tmp;
	}
	return 0;
}
char minus(char *p,char *pb,int timeA,int timeB)//減號副程式 
{
	char op[50]={0};
	int tmp=timeA>timeB?timeA:timeB; //判斷a陣列b陣列哪個大 
	int sizemax=tmp;   //存取最大的 
	int change=0;
	if(timeB>timeA)   //如果b的數字比a多就ab交換，並且多加個負號 
	{
		char *tmper=p;
		p=pb;
		pb=tmper;
		printf("-");
		change++;
	}
	int scoreA=0,scoreB=0;
	if(timeA==timeB)     //如果a數字和b一樣多 就互相比用分數計算 位數越大 被數越高 分數高代表數字大 
	{
		for(i=tmp-1;i>=0;i--)
		{
			scoreA+=p[i]*(i+1);   //比較最後一個數時 不能乘上0  不然最後一個數字無法比較 
			scoreB+=pb[i]*(i+1);
		}
		if(scoreB>scoreA)  //如果b數字比a大 就前後交換 並打印負號 
		{
			char *tmper=p;
			p=pb;
			pb=tmper;
			printf("-");
			change++;
		}
	}
	int time=0,n=0,zero=0;			
	for(i=0,j=0;tmp>0;i++,j++,tmp--)//借位判斷部分 
	{
		op[i]+=p[i]-pb[j];
		if(p[i]<pb[j])
		{
			for(n=i+1;n<sizemax;n++)//迴圈尋找可借位之數 
			{
				if(p[n]>=1)//大餘1代表可借位之數 
				{
					p[n]-=1;
					op[i]=10-pb[i]+p[i];
					break;
				}
				if(p[n]==0)//判斷如果是0 但借位後的值 
				{
					p[n]=9;
				}
			}
		}
		if(p[i]==pb[i]) //數字一樣 相減為0 
		{
			zero++;
			if(zero==tmp)
			{
				printf("0");
				break;
			}
		}	
		time++;			//op陣列回圈跑幾次 
	}
	int reset=0,k=time-1;
	int control=0;
	for(i=time-1;i>=0;i--)    ///打印部分 
	{
		if(control==0) //檢查第一個數字是不是0 
		{
			if(op[k]==0) //是的話跳過  
			{
				control++;
				continue;
			}
			printf("%d",op[i]);
			control++;
		}
		else
			printf("%d",op[i]);
	}
	printf("\n");
}
char adder(char *p,char *pb,int timeA,int timeB)//加號副程式 
{
	char op[50]={0};
	int tmp=timeA>timeB?timeA:timeB,carry=0;//判斷a陣列b陣列哪個大 
	int time=0,control=0;			//op陣列回圈跑幾次 
	for(i=0,j=0;tmp>0;i++,j++,tmp--)//a陣列測試 
	{
		op[i]+=p[i]+pb[j]+carry;
		carry=0;
		if(op[i]>=10)
		{
			if(control==0) //進位 這個規則讓他發現只要大餘10"強制進位" 
			{
				tmp++;
				control=1;
			}
			carry=op[i]/10;
			op[i]%=10;
		}
		time++;			//op陣列回圈跑幾次 
	}
	int reset=0,k=time-1;
	control=0;
	for(i=time-1;i>=0;i--)
	{
		if(control==0) //檢查第一個數字是不是0 
		{
			if(op[k]==0) //是的話跳過  
			{
				control++;
				continue;
			}
			printf("%d",op[i]);
			control++;
		}
		else
			printf("%d",op[i]);
	}
	printf("\n");
}
int main()
{
	char inputer [50]={0};
	while(gets(inputer)!=0)//空格為asc ii '32'
	{
		int ctrl=0;
		char a[50]={0},b[50]={0};
		for(i=0;i<strlen(inputer);i++)  //把第一段數字存進陣列a 
		{
			if(inputer[i]==32)//空格為asc ii '32'
				break;
			a[i]=inputer[i];
		}
		for(i=0,j=strlen(a)+3;i<strlen(inputer)-(strlen(a)+3);i++,j++)  //把第二段數字存進陣列b
			b[i]=inputer[j];
			
		int timeA=strlen(a);
		int timeB=strlen(b);
		change(a,b,timeA,timeB);
		for(i=timeA-1;i>=0;i--)  //把ascii碼轉為整數  
			a[i]=a[i]-'0';
		for(i=0;i<timeB;i++)  //把ascii碼轉為整數 
			b[i]=b[i]-'0'; 
#ifdef debug
		printf("\n a陣列:"); 	//debug  
		for(i=0;i<timeA;i++)//a陣列測試 
		{
			printf("%d",a[i]);
		}
		printf("\n b陣列:");
		for(i=0;i<timeB;i++)//b陣列測試 
		{
			printf("%d",b[i]);
		}
		printf("\n\n");
#endif
		int add=0,min=0;
		for(i=0;i<strlen(inputer);i++) //運算子 
		{
			if(inputer[i]=='+')
			{
				add++;
				
			}
			if(inputer[i]=='-')
			{
				min++;
			}
//			if(inputer[i]=='*')
//			{
//				multiply(a,b);
//			}
//			if(inputer[i]=='/')
//			{
//				divide(a,b);
//			}
		}
		if(add>0 || min>0)
		{
			
			if(add>0)
				adder(a,b,timeA,timeB);
			if(min>0)
				minus(a,b,timeA,timeB);
		}
	}
}
