// arrfun4.cpp -- functions with an array range
#include <iostream>

const int ArSize = 8;
int sum_arr(const int* begin, const int* end);

int main()
{
	int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

	std::cout << cookies << " = array address, ";
	std::cout << sizeof cookies << " = sizeof cookies\n";

	int sum = sum_arr(cookies, cookies + ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;

	sum = sum_arr(cookies, cookies + 3);		// a lie
	std::cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, cookies + 8);	// another lie
	std::cout << "Last four eaters ate " << sum << " cookies.\n";

	return 0;
}

int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
	{
		total += *pt;
	}

	return total;
} 