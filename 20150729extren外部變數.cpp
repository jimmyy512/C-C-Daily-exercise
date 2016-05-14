#include <iostream>
#include "My_header.h"
using namespace std;
extern int summer;
int main()
{ 
	cout<<summer<<endl;
	printf("%x\n",&summer);
	int summer=20;
	cout<<summer<<endl;
	printf("%x\n",&summer);

}

