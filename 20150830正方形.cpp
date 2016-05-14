#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	int x,y;
	int num=5;
	for (x = 0; x < num; x++) {
        for (y = 0; y < num; y++) 
		{
            if (x == 0 || y == 0 || x == num - 1 || y == num - 1) 
			{
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        cout<<endl;
    }
}
