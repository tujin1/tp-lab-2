
#include <cstring>
#include <iostream>
template<typename T>

bool cmp(T a, T b) {
	return a < b;
}
bool cmp(char * a, char * b) {
	return strlen(a) < strlen(b);
}
template <typename T>
void msort(T * a ,size_t n){
	if (n < 2) return;
	msort(a, n / 2);  
	msort(a + n / 2, n - n / 2);  
	int r1 = 0, r2 = 0;
	T * b = new T[n];
	while ((r1 < n / 2) && (r2 < n - n / 2)) {
		if (cmp(a[r1], a[n / 2 + r2])) {
			b[r1 + r2] = a[r1];
			r1++;
		}
		else {
			b[r1 + r2] = a[n / 2 + r2];
			r2++;
		}
	}
	while (r1 < n / 2) {
		b[r1 + r2] = a[r1];
		r1++;
	}
	while (n / 2 + r2 < n) {
		b[r1 + r2] = a[n / 2 + r2];
		r2++;
	}
	for (int i = 0; i < n; i++) a[i] = b[i];
	delete[] b; 
}