#include <iostream>
#include <thread>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;
using namespace std::this_thread;
void msg(std::string str)
{	
	MessageBoxA(0,str.c_str(), "title", 0);
}
int main()
{
	//�@��Ыئh�������k
	thread t1(msg,"�ڬOt1");
	thread t2(msg,"�ڬOt2");
	t1.join();
	t2.join();

	vector<thread *> threads;
	for (int i = 0; i < 5; i++)
	{
		char str[20];
		sprintf(str, "�ڬOvector�̪�t%d", i + 1);
		threads.push_back(new thread(msg,str));
	}
	for (auto at : threads)
	{
		at->join();
	}
	return 0;
}
