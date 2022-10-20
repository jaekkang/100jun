#include <iostream>
#include <algorithm>
#include <cmath>

int	main(void)
{
	int	arr[3];

	while (1)
	{
		std::cin>>arr[0]>>arr[1]>>arr[2];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			return (0);
		std::sort(arr, arr + 3);
		if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2) && arr[0] != 0)
			std::cout<<"right\n";
		else 
			std::cout<<"wrong\n";
	}
	return (0);
}