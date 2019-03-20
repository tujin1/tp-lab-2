#include <iostream>
using namespace std;
template <typename T, size_t n>

void map(T a[], T(*change)(T)) {

	for ( int i = 0; i < n; i++) {
		a[i] = change(a[i]);
	}

}

