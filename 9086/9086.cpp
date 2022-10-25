#include <iostream>
#include <string>

using namespace std;

int	main(void)
{
	string str;
	int num;

	cin>>num;
	for (int i=0;i<num;i++)
	{
		cin>>str;
		cout<<str[0]<<str[str.size() - 1]<<'\n';
	}
	return (0);
}