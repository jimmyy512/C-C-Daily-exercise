#include <stdio.h>
#define LENGTH 10

int main(void) {
    double iarr[] = {1, 2, 3, 4, 6};
	printf("陣列長度：%d\n", sizeof(iarr) / sizeof(iarr[0]));
	//sizeof 求變數占幾個byte 

    return 0;

}
