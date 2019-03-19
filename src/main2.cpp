#include "task2.h"
#include <iostream>
template<class T>
T gen()
{
    static int t = 48;
    return t++;
}
int main() {
	auto * a = createArr<int, 10>(&gen);

	for (int i = 0; i < 10; i++)
		std::cout << a[i] << " ";
	
}