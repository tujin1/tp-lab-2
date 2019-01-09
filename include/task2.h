#include <iostream>
using namespace std;
template <typename T, size_t n>
T * createArr(T(*gen)()) {
	T * a = new T[n];
	for (int i = 0; i < n; i++)
		a[i] = gen();
	return a;
}