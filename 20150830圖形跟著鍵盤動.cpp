#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;


int main()
{
	COORD c,o;
    c.X=0,c.Y=0;
    o.X=0,o.Y=0;
	int key;
	while(!kbhit())
	{
		SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("O"); 
		key=getch();
		if(key==65||key==97)//¥ª 
		{
			c.X--;
		} 
		
		if(key==68||key==100)//¥k 
		{
			c.X++;
		}
		if(key==83||key==115) //¤U 
		{
			c.Y++;
		}
		if(key==87||key==119)//¤W 
		{
			c.Y--;
		}
		SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), o);
		cout<<" ";
		o.X=c.X,o.Y=c.Y;
	}

	
		
} 

