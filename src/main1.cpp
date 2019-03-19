#include"task1.h"
using namespace std;
int main()
{
	const size_t n = 4;
	int *a = new int[n] {3,1,2,4};
	msort(a, n);
	for (int i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << endl;
	

	char* b[n]{ "cc","ewa", "w","ssss"};
	msort(b, n);
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
   
}