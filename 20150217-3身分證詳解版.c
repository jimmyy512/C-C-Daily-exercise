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
	char s[10]; // 總共會輸入10個字元 
	int a[11];  // 第一個字母代表2個數字 所以總共是11個字元 
	int i,j,k,t=0,e=0,x,f=0;
	printf("你想要輸入幾次後就結束程式?\n");
	scanf("%d",&e);
    while(1){
    printf("請輸入身分證\n");
    scanf("%s",s);
	for (i=2;i<11;i++){   // 前面2個數字是給字母用的 所以從第三個數字開始 
		a[i]=(int)s[i-1]-48;
//		printf("%d",(int)s[i-1]-48); 	//用來測試身分證數字9位 
	}
	int p=(int)s[0]-65; // 	A的ASC 為65 先算輸入字母的數字是多少 
	int c=v[p];//	就可以知道是v的第幾個數字 
	a[0]=c/10; //	這行用來判斷數字的十位數 
	a[1]=c%10; //	這行用來判斷數字的個位數 
//	例： T112663836
//	2 + 7*9 + 1*8 + 1*7 + 2*6 + 6*5 + 6*4 + 3*3 + 8*2 + 3*1 + 6 = 180
//	除以 10 整除，因此為 real 
//	t=a[0]+a[1]*9+a[2]*8+a[3]*7+a[4]*6+a[5]*5+a[6]*4+a[7]*3+a[8]*2+a[9]*1+a[10];
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
		if(f>=e)break;     //用來判斷輸入幾次就會結束迴圈 
        continue;
	}
	else {
		printf("fake\n");
		f++;
		if(f>=e)break;     //用來判斷輸入幾次就會結束迴圈 
        continue;
    }
	}
	return 0;
}
