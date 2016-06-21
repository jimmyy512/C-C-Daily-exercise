#include<iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
	std::array<int, 3> a1{ { 1, 2, 3 } }; // double-braces required in C++11 (not in C++14)
	std::array<int, 3> a2 = { 1, 2, 3 };  // never required after =
	// container operations are supported
	std::sort(a1.begin(), a1.end());
	std::reverse_copy(a2.begin(), a2.end(),std::ostream_iterator<int>(std::cout," "));
	std::cout << '\n';
	// ranged for loop is supported
	//for (auto s : a1)
	//	std::cout <<s<< ' ';
	//
	std::vector<int> myvector;
	for (int i = 1; i<10; ++i) myvector.push_back(i * 10);
	std::ostream_iterator<int> out_it(std::cout, ", ");
	std::copy(myvector.begin(), myvector.end(), out_it);
	
	system("pause");

	return 0;
}
