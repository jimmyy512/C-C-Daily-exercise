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
2 + 7*9 + 1*8 + 1*7 + 2*6 + 6*5 + 6*4 + 3*3 + 8*2 + 3*1 + 6 = 180
除以 10 整除，因此為 real 
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int v[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char s[10];
	int a[11];
	int i,j,k,t=0,e=0,x,f=0;
	printf("你想要輸入幾次後就結束程式?\n");
	scanf("%d",&e);
    while(1){
    printf("請輸入身分證\n");
    scanf("%s",s);
	for (i=2;i<11;i++){
		a[i]=(int)s[i-1]-48;

	}
	int p=(int)s[0]-65; 
	int c=v[p];
	a[0]=c/10;
	a[1]=c%10;
	for (i=0,x=9;i<=10;i++){
		if (i>=1 && i<=9){
			t+=a[i]*x;
			x--;
		}
	}
	t+=a[0]+a[10];
	if ((t%10)==0){
		printf("real\n");
		f++;
		if(f>=e)
			break;  
	}
	else {
		printf("fake\n");
		f++;
		if(f>=e)
			break;  
    }
    t=0;
	}
	return 0;
}
