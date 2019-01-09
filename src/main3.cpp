#include <iostream>

#include"task3.h"
using namespace std;
int change(int i) {
	return i%3;
}
int main() {
	const size_t n = 4;

	int a[n]{ 2, 2, 10, 3 };
	map<int, n>(a, change);

	for (auto i=0;i<n;i++)
		cout << a[i] << " ";

	
	return 0;
}
