#include <iostream>
using namespace std;
class BookShelf
{
	private:
		const static int Max_books;
		int count;
		char* name;
			class Book
			{
			private:
				char* title;
				int price;
			public:
				Book(char* t, int p)
				{
					title = t, price = p;
				}
				char* get_title(){ return title; }
				int get_price(){ return price; }
				void set_price(int new_price){ price = new_price; }
			};
		Book* book[10];
	public:
		BookShelf(char* n)
		{
			name = n;
			count = 0;
		}
		void insert_book(char* t, int p)
		{
			if (count == Max_books)
			{
				cout << "書架已放滿書\n" << endl;
				return;
			}
			book[count++] = new Book(t, p);
		}
		void List_Book_Show()const
		{
			cout << "[" << name << "]" << endl;
			cout << "============================" << endl;
			int i;
			for (i = 0; i<count; i++)
				cout << book[i]->get_title() << "\t" << book[i]->get_price() << endl;
		}
		void p_to_book(int new_price)
		{
			book[0]->set_price(new_price);
		}
};
const int BookShelf::Max_books = 10;
int main()
{
	BookShelf bks("我的書架");
	bks.insert_book("張三傳", 450);
	bks.insert_book("李四傳", 420);
	bks.insert_book("郭靖傳", 360);
	bks.insert_book("郭靖傳", 360);
	bks.insert_book("郭靖傳", 360);
	bks.insert_book("郭靖傳", 360);
	bks.insert_book("郭靖傳", 360);
	bks.insert_book("郭靖傳", 360);
	bks.insert_book("郭靖傳", 360);
	bks.insert_book("十全傳", 100);//第10本
	bks.insert_book("無忌傳", 200);//第11本
	bks.List_Book_Show();

	BookShelf *p=&bks;
	p->p_to_book(2000);
	p->List_Book_Show();
	

	
	system("pause");
}
