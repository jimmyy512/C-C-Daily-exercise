#include <iostream>
using namespace std;
void view_modify();
int count=100;
int main()
{
	cout<<"眤ぇ玡把芠セ呼计:"<<count<<endl; 
	view_modify();
	cout<<"ヘ玡羆把芠计:"<<count; 
}
void view_modify()
{
	int count=0;//跋办跑计柑count 
	count++;
	cout<<"眤琌セら材"<<count<<""<<endl; 
	
	::count++;//絛瞅笲衡:: э办跑计 
}
