#include <iostream>

using namespace std;

int	main(void)
{
	int	num;
	int	arr[31] = {0, };

	for (int i = 0;i < 28; i++)
	{
		cin >> num;
		arr[num] = 1;
	}
	for (int j = 1; j < 31; j++)
	{
		if (arr[j] == 0)
		{
			cout << j << '\n';
		}
	}
	return (0);
}