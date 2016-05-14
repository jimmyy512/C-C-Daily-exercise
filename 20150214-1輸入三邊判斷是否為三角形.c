/*
輸入任意三邊長，判斷這三邊長可否構成三角形？
判斷依據：三角形任意兩邊長之和＞第三邊。
第一次問請輸入 第二次問請重新輸入 
*/
#include <stdio.h>
#include <Stdlib.h>
int main (void){
	int a,b,c;
	printf ("請輸入三邊長\n");
	while (1){
	scanf ("%d%d%d",&a,&b,&c);
	if (a+b>c){
		printf("是三角形\n\n");
		printf ("請輸入三邊長\n\n");
	}
	else {
		printf("無法構成三角形\n\n");
		printf ("請重新輸入\n\n");
		continue;
	}
    }
	return 0;
}
