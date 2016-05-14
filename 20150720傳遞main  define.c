//¶Ç»¼¨ç¼Æ¦W main 
#include <stdio.h>
#define getmain(x) #x    //  #x = "x" 
int main()
{
	printf("%s",getmain(main));
	system("pause");
	return 0;
}
