#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()  
{  
    printf("���̹��j�p �����j�p\n");          
      
  
    int nScreenWidth, nScreenHeight;  
    nScreenWidth = GetSystemMetrics(SM_CXSCREEN);  
    nScreenHeight = GetSystemMetrics(SM_CYSCREEN);  
  
    printf("�̹��j�p�]�����^ �e�G%d ���G%d\n", nScreenWidth, nScreenHeight);  
    return 0;  
}  
