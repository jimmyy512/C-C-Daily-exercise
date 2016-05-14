#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()  
{  
    printf("取屏幕大小 像素大小\n");          
      
  
    int nScreenWidth, nScreenHeight;  
    nScreenWidth = GetSystemMetrics(SM_CXSCREEN);  
    nScreenHeight = GetSystemMetrics(SM_CYSCREEN);  
  
    printf("屏幕大小（像素） 寬：%d 高：%d\n", nScreenWidth, nScreenHeight);  
    return 0;  
}  
