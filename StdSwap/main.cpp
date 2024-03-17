#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < v1.size() - 1; i++)
	{
		std::swap(v1[i], v1[i + 1]);
	}

	for (auto elem : v1)
	{
		std::cout << elem << ' ';
	}
	std::cout << '\n';
	
	return 0;
}