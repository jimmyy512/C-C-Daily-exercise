#include <stdio.h>
#include <stdlib.h>
/*    A=10 台北市     J=18 新竹縣     S=26 高雄縣
      B=11 台中市     K=19 苗栗縣     T=27 屏東縣
      C=12 基隆市     L=20 台中縣     U=28 花蓮縣
      D=13 台南市     M=21 南投縣     V=29 台東縣
      E=14 高雄市     N=22 彰化縣     W=32 金門縣
      F=15 台北縣     O=35 新竹市     X=30 澎湖縣
      G=16 宜蘭縣     P=23 雲林縣     Y=31 陽明山
      H=17 桃園縣     Q=24 嘉義縣     Z=33 連江縣
      I=34 嘉義市     R=25 台南縣
  (2) 英文轉成的數字, 個位數乘９再加上十位數的數字
  (3) 各數字從右到左依次乘１、２、３、４．．．．８
  (4) 求出(2),(3) 及最後一碼的和
  (5) (4)除10 若整除，則為 real，否則為 fake
 例： T112663836
2 + 7*9 + 1*8 + 1*7 + 2*6 + 6*5 + 6*4 + 3*3 + 8*2 + 3*1 + 6 = 180 */
int list(first)
{	
	first-=65;
	int i,city[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	for(i=0;i<26;i++)
	{
		if(city[first]==city[i])
			return city[i];
	}
}
int main()
{
	int i=0,j,k,tmp,tens,ones;
	char Num[10];
	while(scanf("%s",&Num)!=EOF)	
	{
		int resault=0,d;
		tmp=list(Num[0]);
		tens=tmp/10;	//十位數 
		ones=tmp%10;	//個位數 
		for(i=1,d=8;i<10;i++,d--)
		{
			Num[i]=Num[i]-'0';  //字符轉成整數 
			if(i<9)
				resault=resault+Num[i]*d;
		}
		resault=resault+tens+ones*9+Num[9];
		if(resault%10==0)
			printf("real\n");
		else
			printf("fake\n");
	}
}

