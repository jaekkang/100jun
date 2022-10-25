#include <iostream>

int	main(void)
{
	int	cnt1;
	int	cnt2;
	int	num;
	
	std::cin>>cnt1;
	int	arr[cnt1];
	for (int i = 0;i < cnt1;i++)
	{
		std::cin>>arr[i];
	}
	std::cin>>cnt2;
	for (int i = 0;i < cnt2;i++)
	{
		std::cin>>num;
		for (int j = 0;j < cnt1;j++)
		{
			if (arr[j] == num)
			{
				printf("i : %d j : %d\n", i, j);
				std::cout<<"1 ";
				std::cout<<num<<'\n';
			}
			else if ()
			{
				std::cout<<"0 ";
				std::cout<<num<<'\n';
			}
		}
	}
	return (0);
}