//给出年分m和一年中的第n天，算出第n天是几月几号。
#include<iostream>
using namespace std;
int main()
{
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year;
	int days;
	int month;
	while (cin >> year >> days)
	{
		int month = 1;
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			arr[2] = 29;
		}
		while (days > arr[month])
		{
			days -= arr[month];
			++month;
		}
		printf("%04d-%02d-%02d\n", year, month, days);
	}
	return 0;
}