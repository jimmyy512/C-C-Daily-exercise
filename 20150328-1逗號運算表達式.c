#include <stdio.h> 
void main (){//逗號運算符優先級是最低的,任何運算符都要高於逗號
// 例如num=(1+3,3*4,7+4)  num=11 
	int a,b,c,d,e,num,u,i;   
	num=(u=1+3,3*4,7+4);
	a=(a=3,6*3);//           a=18  18
	b=b=3,6*3;//             b=3   18
	c=3,c+=2,i=c+3;//          c=5    8
	d=3*5,a*4;//             d=15  60
	(e=3*5,a*4),a+5;//       e=15  20
//	int i=1,2;  不加括號 等於優先權會大於逗號 所以會出錯 
//  int i=(1,2);  i=2   這才是正確的寫法 
	printf("\n%d",i);
	printf("num=%d\n\n\n",num);
	printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d",a,b,c,d,e);
	printf("\n");//空一行 
	printf("我"),printf("叫做"),printf("莊鈞宇"); //逗號用法
	printf("%d",u);
}
