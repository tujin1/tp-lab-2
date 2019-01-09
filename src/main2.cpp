#include "task2.h"
#include <iostream>

int main() {
	auto * a = createArr<int, 10>(gen);

	for (int i = 0; i < 10; i++)
		std::cout << a[i] << " ";
	
}